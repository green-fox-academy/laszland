#include <iostream>

int numbMinimum (int *arr, int size);

int main() {

    int numbers[] = {12, 4, 66, 101, 87, 3, 15};
    int size = 7;

    int smallest = numbers[0];
    for (int i = 0; i < size; ++i) {
        if (numbers[i] < smallest) {
            smallest = numbers[i];
        }
        }

    std::cout << "The smallest number of the array is: " << smallest << std::endl;

    smallest = numbMinimum(numbers, size);

    std::cout << "The smallest number of the array is: " << smallest << std::endl;

    return 0;
}

int numbMinimum (int *arr, int size) {
    int minimum = arr[0];
    int *minimumPtr = &minimum;
    for (int i = 0; i < size; ++i) {
        if(arr[i] < minimum) {
            minimum = arr[i];
        }
    }

    return *minimumPtr;
}