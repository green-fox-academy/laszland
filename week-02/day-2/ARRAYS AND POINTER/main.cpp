#include <iostream>

int main() {
    int numbers[] = {12, 42, 33};
    int *numberPtr = numbers;

    for (int i = 0; i < 3; i++) {
        std::cout << numbers + i << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << numberPtr + i << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << numbers[i] << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << numberPtr[i] << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << *(numberPtr + i) << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < 3; i++) {
        std::cout << *(numbers + i) << std::endl;
    }
    return 0;
}