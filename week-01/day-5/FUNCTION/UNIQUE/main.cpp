#include <iostream>
#include <string>

int uniqueNumb(int numb[], int x);


int main(int argc, char* args[]) {
    int arraySize;

    std::cout << " How many numbers want to type?";
    std::cin>> arraySize;

    int numb[arraySize];

    for (int i = 0; i < arraySize; i++) {
        std::cout << "Give me a number: ";
        std::cin>> numb[i];
    }

    uniqueNumb(numb[arraySize], arraySize);

    return 0;
}

void uniqueNumb(int numb[], int x) {
    for (int i=0; i<x; i++) {
        int j;
        for (j=0; j<i; j++) {
            if (numb[i] == numb[j]) {
                break;
            }
        }
        if (i == j) {
            std::cout << numb[i] << " ";
        }
    }
}


