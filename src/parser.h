#ifndef PARSER_H
#define PARSER_H

void printHelp(); //what prints to command line when no other arguments written

int whatAmI(char* arg);                //Given an argument, returns int stating what it is

void parseArg(char* arg);               //Given an argument, decides whether argument is a flag, file, or directory, and runs respective parsing function
void parseFlag(char* flag);             //Runs respective function(s) for flag
void parseFile(char* file);             //Runs respective function(s) for file
void parseDirectory(char* directory);   //Runs respective function(s) for directory

char* fileType(char* fileName);   //Used in parseFile and parseDirectory to determine file type or if it is a directory

int runUnknown(char* arg);              //If an argument is otherwise unknown, runs this function and terminates program to help avoid error

#endif