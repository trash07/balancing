/**
 * @(#)io.c 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 */

#include <stdlib.h>
#include <stdio.h>
#include "io.h"

/**
 * @inherit
 */
char* readLine() {
    char* line = (char*)malloc(DEFAULT_CAPACITY* sizeof(char));
    int capacity = DEFAULT_CAPACITY;
    int index = 0;
    char c;
    while ( (c = getchar()) != EOL ) {
        if(is_full_buffer(index, capacity))
            expand(line, capacity);
        *(line + index++) = c;
    }
    shrink(line, index);
    return line;
}

/**
 * @inherit
 */
int is_full_buffer(int index, int capacity) {
    return (index == (capacity - 1));
}

/**
 * @inherit
 */
void expand(char* line, int capacity) {
    int nc = capacity << 1;
    realloc(line, nc * DEFAULT_CAPACITY);
}

/**
 * @inherit
 */
void shrink(char* line, int length) {
    realloc(line, length);
}

/**
 * Print help text
 */
void help() {
    fprintf(stdout, "Help goes here.");
}