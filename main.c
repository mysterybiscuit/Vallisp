#include <stdio.h>
#include <stdlib.h>

static char input[2048];

int main(int argc, char** argv) {
    puts("Vallisp v1");
    puts("Press Ctrl+c to Exit\n");

    while (1) {
        fputs("Vallisp> ", stdout);
        fgets(input, 2048, stdin);
        printf("No you're a %s", input);
    }

    return 0;
}