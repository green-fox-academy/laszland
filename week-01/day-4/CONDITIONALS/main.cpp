#include <iostream>

int main (int argc, char* args []) {
    //Odd or Even
    /*int numb;

    std::cout<< "Type a number: ";
    std::cin>> numb;

    if (numb % 2 == 0) {
        std::cout<< "Your number is even." << std::endl;
    } else {
        std::cout << "Your number is odd." << std::endl;
    }*/


    // One two a lot
    /*int a;

    std::cout << "Type an integer: ";
    std::cin>> a;

    if (a <= 0) {
        std::cout << "Not enough" <<std::endl;
    } else if (a == 1) {
        std::cout<< "One" <<std::endl;
    } else if (a == 2) {
        std::cout<< "Two" <<std::endl;
    } else {
        std::cout<< "A lot" <<std::endl;
    }*/


    // Print bigger
    /*int b;
    int c;

    std::cout<< "Type an integer: ";
    std::cin>> b;

    std::cout<< "Type an other integer: ";
    std::cin>> c;

    if (b > c) {
        std::cout<< "The bigger number is: " << b << std::endl;
    } else if (b == c) {
        std::cout<< "The two number are identical. " << std::endl;
    } else {
        std::cout<< "The bigger number is: " << c << std::endl;
    }*/


    // Party Indicator

    int girl;
    int boy;

    std::cout<< "How many girl are participated on the party? ";
    std::cin>> girl;

    std::cout<< "How many boy are participated on the party? ";
    std::cin>> boy;

    int participants = boy + girl;

    if (boy == girl && participants >= 20) {
        std::cout<< "The party is excellent!" << std::endl;
    } else if ((participants >= 20) && !(girl == boy)) {
        std::cout<< "Quite cool party!" << std::endl;
    } else if ((participants < 20) && (girl == 0)) {
        std::cout<< "Sausage party" << std::endl;
    } else {
        std::cout<< "Average party" << std::endl;
    }



    return 0;
}