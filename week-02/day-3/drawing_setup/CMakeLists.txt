cmake_minimum_required(VERSION 3.14)
project(drawing_setup)

set(CMAKE_CXX_STANDARD 14)


set(SDL2_ROOT_PATH /Users/peter/greenfox/SDL2_plugins)

set(EXECUTABLES "draw;coloredBox;diagonals;goToCenter;horizontalLines;squareCenter;fourRectangles;positionSquare;centeredBoxes;rainbowBoxes;purpleSteps;purple3d;funktionToCenter;linePlay;envelopeStar;chessBoard;triangle")
set(CMAKE_MODULE_PATH ${CMAKE_CURRENT_SOURCE_DIR}/cmake)

IF(WIN32)
    set(MINGW_VERSION i686-w64-mingw32)
ENDIF()

find_package(SDL2_all REQUIRED)
