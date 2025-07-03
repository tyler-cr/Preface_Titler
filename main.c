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
#include "src/flags.h"

//for testing
#include "string.h"

int main(int argc, char *argv[]) {

    loadFileTypeList("languages.txt");

    if (argc == 1){
        printHelp();
        return 1;
    }


    for (int i = 0; i < argc; i++){
        parseArg(argv[i]);
    }

}
