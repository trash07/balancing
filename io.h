/**
 * @(#)io.h 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 */

#ifndef BALANCING_IO_H
#define BALANCING_IO_H

/**
 * Default line length
 */
#define DEFAULT_CAPACITY 20

/**
 * End of Line (EOL)
 */
#define EOL '\n'

/**
 * Read the next input line from stdin
 * @return
 */
char* readLine();

/**
 * Check whether the buffer is full or not
 * @param index The actual index
 * @param capacity The actual buffer capacity
 * @return true|false
 */
int is_full_buffer(int index, int capacity);

/**
 * Double the buffer capacity
 * @param line data to expand
 * @param capacity
 */
void expand(char* line, int capacity);

/**
 * Reduce the buffer capacity to the actual length of the string
 * @param line the data to adapt
 * @param length the actual length of the string
 */
void shrink(char* line, int length);

/**
 * Print help text
 */
void help();

#endif //BALANCING_IO_H
