#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
  char* language;
  char* fileExtension;
  char* singleComment;
  char* leftMultiComment;
  char* rightMultiComment;
} fileTypeDictElement;

char* getSingleComment(char* langOrExtension);
char* getRightMultiComment(char* langOrExtension);
char* getLeftMultiComment(char* langOrExtension);

void loadFileTypeList();

void createFileTypeDictElement(char* language,char* fileExtension,char* singleComment,char* leftMultiComment,char* rightMultiComment);

#endif
