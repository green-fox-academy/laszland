#include <iostream>

void swap(int *a, int *b);

int main() {
    int a = 10;
    int b = 316;

    int *aPtr = &a;
    int *bPtr = &b;

    std::cout << " a = " << a << ", " << "b = " << b << std::endl;

    swap(aPtr, bPtr);
    std::cout << "After swap:" << std::endl;
    std::cout << " a = " << a << ", " << "b = " << b << std::endl;

    return 0;
}

void swap(int *a, int *b) {
    std::swap(*a, *b);
}