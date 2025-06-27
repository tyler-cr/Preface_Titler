#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdio.h>
#include "parser.h"

void printHelp(){
    printf("Usage: ./pre [FLAG(S)]... [FILE(s)]... \n\n");
    printf("Add a preface to FILE and overwrite it (by default)\n");
    printf("PLEASE put flags in front of file(s) IE: pre -r -o ~/exampledirectory ~/newexampledirectory\n");
    printf("inserting flags afterwords may cause undefined behavior\n\n");
    printf("FLAGS\n");
    printf("\n");
}

int whatAmI(char* arg) {
    if (arg[0] == '-') return 1; // flag

    struct stat path_stat;
    if (stat(arg, &path_stat) != 0) {
        return 0; // stat failed; unknown
    }

    if (S_ISDIR(path_stat.st_mode)) return 2; // directory
    if (S_ISREG(path_stat.st_mode)) return 3; // file

    return 0; // unknown
}


void parseArg(char* arg){
    switch (whatAmI(arg)){
        case 1:
            parseFlag(arg);
            break;

        case 2:
            parseFile(arg);
            break;

        case 3:
            parseDirectory(arg);
            break;

        default:
            printf("Invalid arg: %s\n", arg);
            return; //maybe this should be something different?
        }
}

void parseFlag(char* flag){
// WIP
}

void parseFile(char* file){
// WIP
}

void parseDirectory(char* directory){
// WIP
}

char* fileType(char* fileName){
    return "WIP";
}

int runUnknown(char* arg){
    printf("cmnd \"%s\" unknown\n", arg);
    return 1;
}
