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
#include "helpers.c"
#include "structs.h"


int main(int argc, char *argv[]) {
    loadFileTypeList("/languages.txt");
}
