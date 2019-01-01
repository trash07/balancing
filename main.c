/**
 * @(#)main.c 1.0 01/01/2019
 * Copyright GNU GPLv3
 * @author KPETO Lonv'ha <mmkpeto5@gmail.com>
 * @version 1.0
 */
#include <stdio.h>
#include <string.h>
#include "io.h"
#include "balancing.h"


int main(int argc, char* argv[]) {
    if (argc == 1) {
        // infinite loop
        for (;;) {
            printf("balancing>");
            char* line = readLine();
            if (strcmp(line, "Q") == 0)
                break;
            else
                evaluate(line);
        }
    } else if (argc == 2) {
        if (strcmp(argv[1], "-h") == 0 || strcmp(argv[1], "--help") == 0)
            help();
        else
            evaluate(argv[1]);
    } else {
        help();
    }

    return 0;
}