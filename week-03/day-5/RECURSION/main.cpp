#include <iostream>

int addDigits(int n);

int main() {

    int numb;

    std::cout << "Give me a non-negative integer: ";
    std::cin >> numb;

    std::cout << "The sum of the yours numbers digits is: " << addDigits(numb);


    return 0;
}

int addDigits(int n) {
    if (n < 10) {
        return n;
    }
    return n % 10 + (addDigits(n / 10));
}