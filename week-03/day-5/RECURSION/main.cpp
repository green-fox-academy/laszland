#include <iostream>

int greatestCommonDivisor (int a, int b);

int main() {

    // iterative
    int a;
    int b;

    std::cout << "Give me a positive number: ";
    std::cin >> a;
    std::cout << "Give me another positive number: ";
    std::cin >> b;

    std::cout << "The greates common divisort of your numbers is: "
              << greatestCommonDivisor(a, b) << std::endl;



}
/*
int greatestCommonDivisor (int a, int b) {
    int greatestDivisor;
    if (a < b) {
        if (a % (a - 1) == 0 || b % (a - 1) == 0) {
            greatestDivisor = a - 1;
        } greatestCommonDivisor(a - 1, b);
    } else {
        if (a % (b - 1) == 0 || b % (b - 1) == 0) {
            greatestDivisor = b - 1;
        } greatestCommonDivisor(a, b - 1);
    }
    return greatestDivisor;
}
 */

int greatestCommonDivisor (int a, int b)
{
    if (b == 0) {
        return a;
    } else {
        return greatestCommonDivisor(b, a % b);
    }
}