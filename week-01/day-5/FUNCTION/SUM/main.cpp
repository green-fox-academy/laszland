#include <iostream>
#include <string>

int sum(int x);

int main(int argc, char* args[]) {
    int userInput;

    std::cout<< "Give me a positive integer: ";
    std::cin>> userInput;

    sum(userInput);


    return 0;
}

int sum(int x) {
    int summary = 0;
    for (int i = 0; i <= x; ++i) {
        summary = summary + i;
    }
    std::cout << summary << std::endl;
}