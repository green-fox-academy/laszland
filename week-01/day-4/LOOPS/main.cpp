#include <iostream>
#include <string>

int main (int argc, char* args []) {
    //I wont cheat on the exam
    /*int a = 0;

    while (a < 100) {
        std::cout << "I wont cheat on the exams!" << std::endl;
        a++;
    }*/


    //Print even
    /*int b = 0;

    while (b <= 500) {
        std::cout << b << std::endl;
        b +=2;
    }*/


    //Multiplication Table
    /*int numb;
    int multipl;

    std::cout<< "Type an integer: ";
    std::cin >> numb;

    for (int multipl = 1; multipl <= 10; multipl++ ) {
        std::cout << multipl << " * " << numb << " = " << numb * multipl << std::endl;
    }*/


    //Count from-to
    /*int numb1;
    int numb2;

    std::cout<< "Type an integer: ";
    std::cin >> numb1;

    std::cout<< "Type an other integer: ";
    std::cin>> numb2;

    if (numb1 > numb2) {
        std::cout << "The second number should be bigger." << std::endl;
    } else {
        while (numb1 <= numb2) {
            std::cout << numb1 << std::endl;
            numb1++;
        }
    }*/


    //Fizz-Buzz
    /*int a;
    for (int a = 1; a <= 100; a++) {
        if ((a % 3 == 0) && (a % 5 == 0)) {
           std::cout << "FizzBuzz" << std::endl;
        } else if (a % 3 == 0) {
            std::cout<< "Fizz" << std::endl;
        } else if (a % 5 == 0) {
            std::cout<< "Buzz" << std::endl;
        } else {
            std::cout << a << std::endl;
        }*/


    // TRIANGLE
    /*int input;

    std::cout<< "How many lines do want? ";
    std::cin>> input;

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j <= i; ++j) {
            std::cout<<"*";
        }
        std::cout<< std::endl;

    }*/


    //DRAW DIAGONAL
    int input;

    std::cout << "How many line do you want? ";
    std::cin >> input;

    for (int i = 0; i < input; ++i) {
        for (int j = 0; j < input; ++j) {
            if ((i > 0 ) && (i < input-1)) {
                std::cout<< " ";
            } else {
            std::cout << "*";
            }
        } std::cout << std::endl;
    }
    return 0;
}