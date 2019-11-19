#include <iostream>

int main () {
    /*int number = 42;
    std::cout << "The value of number is: " << number << std::endl;
    std::cout << "The address of number is: " << &number << std::endl;

    int *ptr;

    std::cout << "The value of ptr is " << ptr << std::endl;
    std::cout << "The address of ptr is " << &ptr << std::endl;

    ptr = nullptr;

    std::cout << "The value of ptr is " << ptr << std::endl;*/


    /*int age = 31;
    int *agePtr = nullptr;

    std::cout << "The value of age is " << age << std::endl;
    std::cout << "The memory address of age is " << &age << std::endl;
    std::cout << "The value of agePtr is " << agePtr << std::endl;

    agePtr = &age;

    std::cout << "The value of agePtr is " << agePtr << std::endl;*/

    // POINTER TYPE

    /*int a = 31;
    double b = 432.2;
    std::string name = "Bob";

    int *aPtr = &a;
    double *bPtr = &b;
    std::string *namePtr = &name;

    std::cout << aPtr << std::endl;
    std::cout << bPtr << std::endl;
    std::cout << namePtr << std::endl;*/


    // PRINT VALUE
    /*int age = 31;
    int *agePtr = &age;

    std::cout << *agePtr << std::endl;*/


    // CHANGE VALUE
    /*float temperature = 21.3;
    float *tempPtr = &temperature;

    std::cout << *tempPtr << " : " << tempPtr << std::endl;

    *tempPtr = 22.6;

    std::cout << *tempPtr << " : " << tempPtr << std::endl;*/


    // ADDING
    int a = 20;
    int b = 17;

    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << *aPtr + *bPtr << std::endl;

    return 0;
}