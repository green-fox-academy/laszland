#include <iostream>
#include <fstream>

void divideTen(int number);

int main() {
    // Create a function that takes a number
    // divides ten with it,
    // and prints the result.
    // It should print "fail" if the parameter is 0.
    // Solve the excercise using exceptions!
    // Hint: The try-catch block should be in main().

    try {
        int numb = 0;
        if (numb == 0) {
            throw std::string("fail");
        }
        divideTen(numb);
    } catch (std::string &e) {
        std::cout << e << std::endl;
    }


    return 0;
}

void divideTen(int number) {
    std::cout << 10 / number << std::endl;
}