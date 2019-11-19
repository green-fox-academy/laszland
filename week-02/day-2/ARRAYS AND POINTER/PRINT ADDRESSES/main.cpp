#include <iostream>

int findMyNumber (int *arr, int x, int y);

int main() {

    // PRINT ADDRESSES
    /*int numbers[5];

    for (int i = 0; i < 5; i++) {
        std::cout << "Give me a number: ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << &numbers[i] << ", ";
    }
    std::cout << std::endl;*/


    //FIVE NUMBERS
    /*int numbers[5];
    int *numbersPtr = numbers;

    for (int i = 0; i < 5; i++) {
        std::cout << "Give me a number: ";
        std::cin >> numbers[i];
    }

    for (int i = 0; i < 5; i++) {
        std::cout << numbersPtr[i] << ", ";
    }
    std::cout << std::endl;*/


    // LOOK FOR VALUE
    /*int numbers[] = {13, 52, 33, 7, 54, 112, 78};
    int size = 7;
    int numbOfUser;
    int index;

    std::cout << "Type an positive whole number: ";
    std::cin >> numbOfUser;

    index = findMyNumber(numbers, size, numbOfUser);

    std::cout << index << std::endl;*/




    return 0;
}

int findMyNumber (int *arr, int x, int y) {
    int index = 0;
    int *indexPtr = &index;

    for (int i = 0; i < x; i++) {
        if (arr[i] == y) {
            index = i;
            }
        }
    if (index != 0) {
        return *indexPtr;
    } else {
        return -1;
    }


}