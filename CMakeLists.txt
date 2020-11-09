cmake_minimum_required(VERSION 3.17)
project(algoritmos)

add_subdirectory(filas)
add_subdirectory(listas-encadeadas)
add_subdirectory(mergesort)

add_executable(algoritmos main.c main.c)