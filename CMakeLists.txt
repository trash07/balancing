cmake_minimum_required(VERSION 3.12)
project(balancing C)

set(CMAKE_C_STANDARD 99)

add_executable(balancing main.c stack.c stack.h io.c io.h balancing.c balancing.h)