#include <iostream>

int addNumbers(int numb);

int main() {

    int numberOfUser;

    std::cout << "Give me a number: ";
    std::cin >> numberOfUser;

    std::cout << "The summary of all the numbers is: " << addNumbers(numberOfUser) << std::endl;



    return 0;
}

int addNumbers(int numb) {
    if (numb == 1) {
        return 1;
    }
    return numb + addNumbers(numb - 1);
}