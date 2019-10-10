//
// Created by Peter on 2019. 10. 10..
//

#include <iostream>
#include "Scanner.h"

Scanner::Scanner(int speed) : _speed(speed) {}

void Scanner::scan() {
    std::cout << "I'm scanning document " << _speed << " ppm." << std::endl;
}