#include <iostream>

int main () {
    int number = 42;
    std::cout << "The value of number is: " << number << std::endl;
    std::cout << "The address of number is: " << &number << std::endl;

    int *ptr;

    std::cout << "The value of ptr is " << ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;

    ptr = nullptr;

    std::cout << "The value of ptr is " << ptr << std::endl;


    return 0;
}