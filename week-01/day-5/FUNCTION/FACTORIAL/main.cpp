#include <iostream>
#include <string>

int factorial(int x);

int main(int argc, char* args[]) {
    int userInput;

    std::cout << "Give me a positive integer: ";
    std::cin>> userInput;

    factorial(userInput);


    return 0;
}

int factorial(int x) {
    int factor = 1;
    for (int i = 1; i <= x; ++i) {
        factor = factor * i;
    }
    std::cout << factor << std::endl;
}