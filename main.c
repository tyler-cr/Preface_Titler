#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("You passed %d arguments:\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("arg[%d]: %s\n", i, argv[i]);
    }
    return 0;
}
