#include <iostream>
#include <string>

int main (int argc, char* args []) {

    /*int myNumbers[] = {1, 2, 3, 6};

    std::cout<< "The second element is: " << myNumbers[1] << std::endl;

    for (int i = 0; i < sizeof(myNumbers) / sizeof(myNumbers[0]); i++) {
        std::cout << myNumbers[i] << std::endl;
    }*/

    // THIRD
    /*int q[] = {4, 5, 6, 7};

    std::cout<< "The third element of q: " << q[2] << std::endl;*/


    //Compare Lenght
    /*int p1[] = {1, 2, 3};
    int p2[] = {4, 5};

    if (sizeof(p1) > sizeof(p2)) {
        std::cout<< "p1 is the longer" << std::endl;
    } else {
        std::cout<< "p2 is the longer" << std::endl;
    }*/


    //SUM ELEMENTS
    /*int r[] = {54, 23, 66, 12};

    std::cout<< "The sum of the second and third element is " << r[2] + r[3] << std::endl;*/


    // CHANGE ELEMENT
    /*int s[] = {1, 2, 3, 8, 5, 6};

    std::cout<< s[3] << std::endl;
    s[3] = 4;
    std::cout<< s[3] << std::endl;*/


    //INCREMENT ELEMENT
    /*int t[] = {1, 2, 3, 4, 5};

    t[2] *= 3;

    std::cout<< t[2] << std::endl;*/


    //PRINT ALL
    /*int numbers[] = {4, 5, 6, 7};

    for (int i = 0; i < sizeof(numbers) / sizeof(0); i++) {
        std::cout<< numbers[i] << std::endl;
    }*/


    //DIAGONAL MATRIX
    int i;
    int j;
    int twoDimension[i][j];

    std::cout << "Type two positive integer: ";
    std::cin >> i;
    std::cin >> j;

    for (int k = 0; k < i; k++) {
        for (int l = 0; l < j; l++) {
            if (l == k) {
                std::cout << "1";
            } else {
                std::cout << "0";
            }
        } std::cout <<std::endl;
    }



    return 0;
}