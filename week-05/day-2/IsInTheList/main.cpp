#include <iostream>
#include <vector>

bool checkNums(std::vector<int> listOfNumbers, std::vector<int> checker);

int main(int argc, char* args[])
{
    const std::vector<int> numbers = {2, 4, 6, 8, 10, 12, 14, 16};
    const std::vector<int> numbers2 = {2, 4, 6, 8, 10, 12, 14, 16, 18, 20};
    const std::vector<int> checker = {4, 8, 12, 16};

    // Check if vector contains all of the following elements: 4,8,12,16
    // Create a method that accepts vector as an input
    // it should return "true" if it contains all, otherwise "false"

    // Expected output: "The first vector does not contain all the numbers"
    if (checkNums(numbers, checker)) {
        std::cout << "The first vector contains all the numbers" << std::endl;
    } else {
        std::cout << "The first vector does not contain all the numbers" << std::endl;
    }

    // Expected output: "The second vector contains all the numbers"
    if (checkNums(numbers2, checker)) {
        std::cout << "The second vector contains all the numbers" << std::endl;
    } else {
        std::cout << "The second vector does not contain all the numbers" << std::endl;
    }

    return 0;
}

bool checkNums(std::vector<int> listOfNumbers, std::vector<int> checker) {
    bool isInTheList = false;
    bool returnValue = false;
    for (int i = 0; i < checker.size(); ++i) {
        isInTheList = false;
        for (int j = 0; j < listOfNumbers.size(); ++j) {
            if (checker[i] == listOfNumbers[j]) {
                isInTheList = true;
            }
        }
        if (!isInTheList) {
            returnValue = false;
            return returnValue;
        } else if (isInTheList) {
            returnValue = true;
        }
    }
    return returnValue;

}