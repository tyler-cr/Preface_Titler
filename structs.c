#include "structs.h"

int listSize;

fileTypeDictElement langList[32]; // supports up to 32 languages. Probably don't need much more

void loadFileTypeList(char* fileName){
  FILE* typeFile = fopen(fileName, "r");
  
  if (typeFile == NULL) {
    printf("Error opening file\n");
    return;
  }

  char line[128];

  fgets(line, 128, typeFile);
  sscanf(line, "%d", &listSize);

  fileTypeDictElement loadedList[listSize];

  char language[16];
  char fileExtension[16];
  char singleComment[16];
  char leftMultiComment[16];
  char rightMultiComment[16];

  for (int i = 0; i < listSize; i++){
    fgets(line, 256, typeFile);
    sscanf(line, "%s %s %s %s %s", language, fileExtension, singleComment, leftMultiComment, rightMultiComment);

    fileTypeDictElement newElement = createFileTypeDictElement(language, fileExtension, singleComment, leftMultiComment, rightMultiComment);

    langList[i] = newElement;

  }


  fclose(typeFile);
}

fileTypeDictElement createFileTypeDictElement(char language[16],char fileExtension[16],char singleComment[16],char leftMultiComment[16],char rightMultiComment[16]){
  fileTypeDictElement newElement = malloc(sizeof(fileTypeDictElement));

    newElement.language = language;
    newElement.fileExtension = fileExtension;
    newElement.singleComment = singleComment;
    newElement.leftMultiComment = leftMultiComment;
    newElement.rightMultiComment = rightMultiComment;

    return newElement;
}



fileTypeDictElement* findLanguage(char* langOrExtension){
  for (int i = 0; i < listSize; i++){
    if (strcmp(langList[i].language, langOrExtension) == 0 || 
        strcmp(langList[i].fileExtension, langOrExtension) == 0){
      return &langList[i];
    }
  }
  return NULL;
}

char* getSingleComment(char* langOrExtension){
  fileTypeDictElement* language = findLanguage(langOrExtension);
  if (language) return language->singleComment;

  return "Language or extension not found!\n Please check spelling "
         "or list of languages currently supported in languages.txt";
}

char* getLeftMultiComment(char* langOrExtension){
  fileTypeDictElement* language = findLanguage(langOrExtension);
  if (language) return language->leftMultiComment;

  return "Language or extension not found!\n Please check spelling "
         "or list of languages currently supported in languages.txt";
}

char* getRightMultiComment(char* langOrExtension){
  fileTypeDictElement* language = findLanguage(langOrExtension);
  if (language) return language->rightMultiComment;

  return "Language or extension not found!\n Please check spelling "
         "or list of languages currently supported in languages.txt";
}
