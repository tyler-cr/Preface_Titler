//There is some irony of not having a preface for the main file of a project that is all about prefaces. So here you go

#include <stdio.h>
#include "helpers.c"

int main(int argc, char *argv[]) {

    if (argc == 1){
        printHelp();
    }





    else{
        printf("WIP Plz 4giv :(\n");
    }

    printf("You passed %d arguments:\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("arg[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
