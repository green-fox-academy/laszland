#include <iostream>
#include <string>
#include <numeric>

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
    /*int i;
    int j;
    int twoDimension[i][j];

    std::cout << "Type a positive integer: ";
    std::cin >> i;

    for (int k = 0; k < i; k++) {
        for (int l = 0; l < i; l++) {
            if (l == k) {
                std::cout << "1";
            } else {
                std::cout << "0";
            }
        } std::cout <<std::endl;
    }*/


    //DOUBLE ITEMS
    /*int numList[] = {3, 4, 5, 6, 7};

    for (int i = 0; i < 5; ++i) {
        numList[i] = numList[i] * 2;
        std::cout<< numList[i] <<std::endl;
    }*/


    //COLORS
    /*std::string shadesOfCOlors [3][5] = {
            {"lime ", "forest green ", "olive ", "pale green ", "spring green"},
            {"orange red ", "red ", "tomato "},
            {"orchid ", "violet ", "pink ", "hot pink "}
    };

    for (int i = 0 ; i < 3; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout<< shadesOfCOlors[i][j];
        } std::cout << std::endl;
    }*/


    //APPEND A
    /*std::string animals[] = {"koal", "pand", "zebr"};

    for (int i = 0; i < 3; ++i) {
        animals[i] = animals[i] + "a";
        std::cout<< animals[i] <<std::endl;
    }*/


    //SWAP
    /*std::string abc[] = {"first", "second", "third"};
    std::swap(abc[0], abc[2]);

    for (int i = 0; i < 3; ++i) {
        std::cout<< abc[i] <<std::endl;
    }*/


    //SUM ALL
    /*int ai[] = {3, 9, 5, 10, 17};
    int sum = 0;

   for (int i = 0; i < 5; i++) {
       sum = sum + ai[i];
   }
   std::cout << sum << std::endl;

   int sum2 = std::accumulate(std::begin(ai), std::end(ai), 0);
   std::cout << sum2 <<std::endl;*/


    //REVERSE
    int aj[] = {3, 4, 5, 6, 7};
    int lastIndexOfArray = 4;

    for (int i = 0; i <= lastIndexOfArray; ++i) {
        if (i <= 2) {
            std::swap(aj[i], aj[lastIndexOfArray - i]);
            std::cout << aj[i] << std::endl;
        } else {
            std::cout << aj[i] <<std::endl;
        }
    }


    return 0;


}