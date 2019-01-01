/**
 * @(#)stack.c 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 * @version 1.0
 */

#include <stdlib.h>
#include <stdio.h>
#include "stack.h"


/**
 * @inherit
 */
stack* new_stack() {
    stack* s = (stack*)malloc(sizeof(stack));
    s->size = 0;
    s->top  = NULL;
    return s;
}

/**
 * @inherit
 */
list_item* new_item(void* data, list_item* next) {
    list_item* item = (list_item*)malloc(sizeof(list_item));
    item->next = next;
    item->data = data;
    return item;
}

/**
 * @inherit
 */
void push(stack* stack, void* data) {
    list_item* item = new_item(data, stack->top);
    stack->top = item;
    stack->size ++;
}

/**
 * @inherit
 */
void* pop(stack* stack) {
    if (isEmpty(stack))
        empty_stack_error();

    list_item* top = stack->top;
    stack->top = top->next;
    --stack->size;
    return top->data;
}

/**
 * @inherit
 */
void* peek(stack* stack) {
    if (isEmpty(stack))
        empty_stack_error();

    return stack->top->data;
}

/**
 * @inherit
 */
int size(stack* stack) {
    return stack->size;
}

/**
 * @inherit
 */
int isEmpty(stack* stack) {
    return size(stack) == 0;
}

/**
 * @inherit
 */
void clear(stack* stack) {
    free(stack->top);
    stack->top  = NULL;
    stack->size = 0;
}

/**
 * @inherit
 */
void empty_stack_error() {
    fprintf(stderr, "Error: Empty stack");
    exit(1);
}

