#include <iostream>

int putPower(int n, int power);

int main() {

    int numb;
    int power;

    std::cout << "Give me a positive integer: ";
    std::cin >> numb;
    std::cout << std:: endl;
    std::cout << "Give me the power integer: ";
    std::cin >> power;

    std::cout << "Your number on the given power is: " << putPower(numb, power) << std::endl;
    return 0;
}

int putPower(int n, int power) {
   if (power == 0) {
       return 1;
   }
   return n * putPower(n, power - 1);
}