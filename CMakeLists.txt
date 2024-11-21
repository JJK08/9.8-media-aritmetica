cmake_minimum_required(VERSION 3.29)
project(mediaaritmetica C)

set(CMAKE_C_STANDARD 11)

add_executable(mediaaritmetica main.c
        "funzione media.c"
        "funzione media.h")
