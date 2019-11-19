#include <iostream>
#include <vector>
#include <math.h>

void whoWillSurvive(int number, std::vector<int> &binary);
void changeBinary(std::vector<int> &originalBinary);
int binaryToDecimal (std::vector<int> &binaryNumber);

int main() {
    std::vector<int> binaryNumber;
    int userInput;
    std::cout << "How many people are sitting in the circle? ";
    std::cin >> userInput;

    whoWillSurvive(userInput, binaryNumber);

    return 0;
}

void whoWillSurvive(int number, std::vector<int> &binary) {
    int i = 0;
    while (number > 0) {
        binary.push_back(number % 2);
        number = number / 2;
        i++;
    }

    /*for (int j = i - 1; j >= 0 ; --j) {
        std::cout << binary[j];
    }
    std::cout << std::endl;*/

    changeBinary(binary);

    std:: cout << "The person on the seat of " << binaryToDecimal(binary) << " will survive.";

}

void changeBinary(std::vector<int> &originalBinary) {
    std::vector<int> tempVector;
    for (int j = originalBinary.size() - 1; j >= 0 ; --j) {
        tempVector.push_back(originalBinary[j]);
    }

    /*for (int i = 0; i < tempVector.size(); ++i) {
        std::cout << tempVector[i];
    }
    std::cout << std::endl;*/

    tempVector.emplace_back(tempVector[0]);

    /*for (int i = 0; i < tempVector.size(); ++i) {
        std::cout << tempVector[i];
    }
    std::cout << std::endl;*/

    tempVector.erase(tempVector.begin());

    /*for (int i = 0; i < tempVector.size(); ++i) {
        std::cout << tempVector[i];
    }
    std::cout << std::endl;*/

    originalBinary = tempVector;
}

int binaryToDecimal (std::vector<int> &binaryNumber) {
    int resultInDecimal = 0;
    for (int i = binaryNumber.size(); i >= 0; --i) {
        resultInDecimal += binaryNumber[i] * pow(2, i);
    }
    return resultInDecimal;

}