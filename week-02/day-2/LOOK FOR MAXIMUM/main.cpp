#include <iostream>
#include <algorithm>

int main() {

    int userInput;

    std::cout << "How many number do you want to put in your array? ";
    std::cin >> userInput;

    int number[userInput];

    for (int i = 0; i < userInput; i++) {
        std::cout << "Give me an integer to your array: ";
        std::cin >> number[i];
    }

    for (int i = 0; i < userInput; i++) {
        std::cout << number[i] << ", ";
    }
    std::cout << std::endl;

    int maxNumber;
    int *maxnumbPtr = &maxNumber;
    maxnumbPtr = std::max_element(number + 0, number + userInput);

    std::cout << *maxnumbPtr << " : " << maxnumbPtr << std::endl;



    return 0;
}