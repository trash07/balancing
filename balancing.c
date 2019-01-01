/**
 * @(#)balancing.c 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 * @version 1.0
 */
#include <stdio.h>
#include <string.h>
#include "balancing.h"
#include "stack.h"

#define L_BRAKET '{'
#define R_BRAKET '}'
#define L_PAREN  '('
#define R_PAREN  ')'
#define L_GROUP  '['
#define R_GROUP  ']'

/**
 * @inherit
 */
void evaluate(char* input) {
    stack* stack = new_stack();


    for (int i = 0; i < strlen(input); i++) {
        char c = *(input + i);
        if (c == L_BRAKET || c == L_PAREN || c == L_GROUP)
            push(stack, c);
        else if (c == R_BRAKET || c == R_PAREN || c == R_GROUP) {
            char d = (char)peek(stack);
            if ((d == L_BRAKET && c == R_BRAKET)
                    || (d == L_PAREN && c == R_PAREN)
                    || (d == L_GROUP && c == R_GROUP))
                pop(stack);
        } else {
            continue;
        }
    }


    if (isEmpty(stack))
        printf("=> Expression: %s is correct.\n", input);
    else
        printf("=> Expression: %s is incorrect.\n", input);
}
