#include <iostream>
#include "Counter.h"

int main() {
    Counter numb1;
    numb1.add(6);
    numb1.get();
    numb1.add(2);
    numb1.get();
    numb1.reset();
    numb1.get();
    return 0;
}