cmake_minimum_required(VERSION 3.14)
project(Vector C)

set(CMAKE_C_STANDARD 11)

add_executable(Vector main.c Vector.h Vector.c)