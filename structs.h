#ifndef STRUCTS_H
#define STRUCTS_H

typedef struct {
  const char* language;
  const char* fileExtension;
  const char* singleComment;
  const char* multiComment;
} fileTypeDictElement;

char* getSingleComment(char* langOrExtension);
char* getMultiComment(char* langOrExtension);

#endif
