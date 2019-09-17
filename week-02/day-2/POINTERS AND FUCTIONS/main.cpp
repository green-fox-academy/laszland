#include <iostream>

void multiplyByTwo(int *intPtr) {
    *intPtr *= 2;
}

int *whichIsBigger(int *intPtr1, int *intPtr2) {
    if (*intPtr1 > *intPtr2) {
        return intPtr1;
    } else {
        return  intPtr2;
    }
}



int main () {
    /*int number = 10;

    std::cout << "The value of the variable number is :" << number << std::endl;

    multiplyByTwo(&number);

    std::cout << "The value of the variable number is :" << number << std::endl;

    int *intPtr = &number;

    multiplyByTwo(intPtr);
    std::cout << "Value of the variable is: " << number << std::endl;*/

    int a = 17;
    int b = 38;

    int *biggerNumberPtr = nullptr;
    biggerNumberPtr = whichIsBigger(&a, &b);

    std::cout << "The bigger number is: " << *biggerNumberPtr << std::endl;

    return 0;
}