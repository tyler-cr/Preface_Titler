#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
  const char* language;
  const char* fileExtension;
  const char* singleComment;
  const char* leftMultiComment;
  const char* rightMultiComment;
} fileTypeDictElement;

char* getSingleComment(char* langOrExtension);
char* getRightMultiComment(char* langOrExtension);
char* getLeftMultiComment(char* langOrExtension);

void loadFileTypeList();

#endif
