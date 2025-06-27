/**
 * Preface Titler: main.c
 *
 *
 * The main file for the CLI tool
 *
 * @author Tyler Crimando
 * @version .05
*/

#include <stdio.h>
#include "src/parser.h"
#include "src/structs.h"

int main(int argc, char *argv[]) {

    if (argc == 1){
        printHelp();
        return 1;
    }




    printf("AHAHHAHAHA\n");
    printf("%d\n", whatAmI(argv[1]));
}
