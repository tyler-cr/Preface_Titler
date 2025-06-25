#include "structs.h"

void loadFileTypeList(char* fileName){
  FILE* typeFile = fopen(fileName, "r");

  fclose(typeFile);
}

#define PLACEHOLDER 20
fileTypeDictElement langList[PLACEHOLDER];



fileTypeDictElement* findLanguage(char* langOrExtension){
  for (int i = 0; i < PLACEHOLDER; i++){
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