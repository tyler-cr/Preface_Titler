#include "structs.h"

int listSize;

fileTypeDictElement *langList[listSize];

void loadFileTypeList(char* fileName){
  FILE* typeFile = fopen(fileName, "r");
  
  if typeFile == NULL) {
    printf("Error opening file\n");
    return;
  }

  char line[256];

  fgets(line, 256, typeFile);
  sscanf(line, "%d", &listSize);

  char* language;
  char* fileExtension;
  char* singleComment;
  char* leftMultiComment;
  char* rightMultiComment;

  for (int i = 0; i < listSize; i++){
    fgets(line, 256, typeFile);
    sscanf(line, "%s %s %s %s %s", language, fileExtension, singleComment, leftMultiComment, rightMultiComment);

    fileTypeDictElement newElement = createFileTypeDictElement(language,fileExtension,singleComment,leftMultiComment,rightMultiComment);

    langList[i] = newElement;

  }


  fclose(typeFile);
}

fileTypeDictElement createFileTypeDictElement(char* language,char* fileExtension,char* singleComment,char* leftMultiComment,char* rightMultiComment){
  //WIP
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
         "or list of languages currently supported in structs.c";
}

char* getLeftMultiComment(char* langOrExtension){
  fileTypeDictElement* language = findLanguage(langOrExtension);
  if (language) return language->leftMultiComment;

  return "Language or extension not found!\n Please check spelling "
         "or list of languages currently supported in structs.c";
}

char* getRightMultiComment(char* langOrExtension){
  fileTypeDictElement* language = findLanguage(langOrExtension);
  if (language) return language->rightMultiComment;

  return "Language or extension not found!\n Please check spelling "
         "or list of languages currently supported in structs.c";
}