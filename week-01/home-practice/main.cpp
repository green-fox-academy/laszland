#include <iostream>
#include <string>
#include <cstdlib>
#include <time.h>

int main(int argc, char* atgs []) {

    //PARAMETRIC AVERAGE
    /*int userInput;

    std::cout<<"How many number do you want to type: ";
    std::cin>> userInput;

    int sumNumber = 0;
    int tempNumb;

    for (int i = 0; i < userInput; i++) {
        tempNumb = 0;
        std::cout<<"Give me a number: ";
        std::cin>> tempNumb;

        sumNumber = sumNumber + tempNumb;
    }

    std::cout<< "Sum: " << sumNumber <<", Average: " << (float) sumNumber / userInput << std::endl;*/


    //GUESS THE NUMBER

    /*std::srand(time(NULL));
    int randomNumber = rand() % 100+1;
    int userGuess;

    std::cout<< "I thought about a number between 1 and 100. Guess which is it!" <<std::endl;
    std::cout << std::endl;
    guess:
        std::cout<< "Guess a number! ";
        std::cin>> userGuess;

    if (userGuess == randomNumber) {
            std::cout<< "Yes, that was my number!!!" <<std::endl;
        } else if (userGuess > randomNumber) {
            std::cout <<"The number is smaller." <<std::endl;
            goto guess;
        } else if (userGuess < randomNumber) {
            std::cout<<"The number is bigger." << std::endl;
            goto guess;
    }*/


    //DRAW CHESS TABLE
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (i % 2 == 0) {
                if (j % 2 == 0) {
                    std::cout<<"@";
                } else std::cout<< " ";
            } else if (i % 2 == 1) {
                if (j % 2 == 0) {
                    std::cout<<" ";
                } else {
                    std::cout<<"@";
                }
            }
        }
        std::cout << std::endl;
    }

    return 0;
}