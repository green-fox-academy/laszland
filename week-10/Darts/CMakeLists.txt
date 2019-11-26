cmake_minimum_required(VERSION 3.15)
project(Darts)

set(CMAKE_CXX_STANDARD 17)

add_executable(Darts main.cpp player.cpp player.h game.cpp game.h)