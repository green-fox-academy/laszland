#include <iostream>
#include <string>

void greet(std::string al);

int main (int argc, char* args[]) {
    std::string al = "Green Fox";
    greet(al);
    return 0;
}


void greet(std::string al) {
    std::cout<< "Greeting deer, " << al << "!";
}