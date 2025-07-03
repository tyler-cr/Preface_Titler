#include <stdio.h>

void printFile(char* fileName){
    FILE* file = fopen(fileName, "r");
    
    if (file == NULL) {
        printf("Error opening file\n");
        return;
    }

    char line[128];

    while (fgets(line, 128, file) != NULL){
        printf("%s", line);
    }

    fclose(file);
       
}

void bnf(){
    printFile("cli.bnf");
}

void help(){
    printFile("help.txt");
}