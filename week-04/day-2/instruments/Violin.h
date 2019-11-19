#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument {

public:
    Violin(int numberOfStrings);
    Violin();

    void play() override;

private:

};


#endif //INSTRUMENTS_VIOLIN_H
