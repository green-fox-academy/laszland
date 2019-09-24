#include <iostream>
#include <fstream>

void divideTen(int number);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0.
    // Solve the excercise without using exceptions!

    int numb = 2;
    divideTen(numb);

    return 0;
}

void divideTen(int number)
{
    if (number == 0) {
        std::cout << "fail" << std::endl;
    } else {
        std::cout << 10 / number << std::endl;
    }

}