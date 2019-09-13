#include <iostream>
#include <string>

int swapInt(int i, int j);

int main(int argc, char* args[]) {
    int a = 15;
    int b = 23;

    std::cout << a << " " << b << std::endl;

    swapInt(a, b);

    return 0;
}

int swapInt(int i, int j) {
    int temp = i;
    i = j;
    j = temp;
    std::cout<< i << " " << j << std::endl;
}