#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
  char language[16];
  char fileExtension[16];
  char singleComment[16];
  char leftMultiComment[16];
  char rightMultiComment[16];
} fileTypeDictElement;

char* getSingleComment(char* langOrExtension);
char* getRightMultiComment(char* langOrExtension);
char* getLeftMultiComment(char* langOrExtension);

void loadFileTypeList();

void createFileTypeDictElement(char* language,char* fileExtension,char* singleComment,char* leftMultiComment,char* rightMultiComment);

#endif
