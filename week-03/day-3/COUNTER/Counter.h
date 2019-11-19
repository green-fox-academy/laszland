
#ifndef COUNTER_COUNTER_H
#define COUNTER_COUNTER_H

#include <iostream>

class Counter {
public:
    Counter();
    Counter(int);

    //functions
    int add();
    int add(int);
    int get();
    int reset();

private:
   int _number;
   int initialNumber;

};


#endif //COUNTER_COUNTER_H
