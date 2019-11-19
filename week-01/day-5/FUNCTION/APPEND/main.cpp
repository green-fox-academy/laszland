#include <iostream>
#include<string>

void appendAFunc(std::string typo);

int main(int argc, char* args[]) {
    std::string typo = "Chinchill";
    appendAFunc(typo);

    return 0;
}

void appendAFunc(std::string typo) {
    typo = typo + "a";
    std::cout << typo << std::endl;
}