/**
 * @(#)stack.h 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 */

#ifndef BALANCING_STACK_H
#define BALANCING_STACK_H

/**
 * The structure of a list item
 * @param next Pointer to the next item
 * @param data The data
 */
typedef struct s_list_item {
    struct s_list_item* next;
    void*  data;
} list_item;

/**
 * The stack structure
 * @param top The top of the stack
 * @param size The size of the stack
 */
typedef struct s_stack {
    list_item* top;
    int size;
} stack;


/**
 * Creates a new stack
 * @return stack*
 */
stack* new_stack();

/**
 * Creates a new list item
 * @return list_item
 */
list_item* new_item();

/**
 * Push data on the stack
 * @param stack
 * @param data
 */
void push(stack* stack, void* data);

/**
 * Removes the top most element of the stack and returns it's data
 * @param stack
 * @return void*
 */
void* pop(stack* stack);


/**
 * Returns the data of the top most element of the stack
 * @param stack
 * @return
 */
void* peek(stack* stack);


/**
 * Gives the size of the stack
 * @param stack
 * @return int
 */
int size(stack* stack);

/**
 * Check whether the stack is empty or not
 * @param stack
 * @return
 */
int isEmpty(stack* stack);


/**
 * Clears the stack
 * @param stack
 */
void clear(stack* stack);

/**
 * Print stack error and exit
 */
void empty_stack_error();


#endif //BALANCING_STACK_H
