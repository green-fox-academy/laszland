#ifndef INSTRUMENTS_VIOLIN_H
#define INSTRUMENTS_VIOLIN_H


#include "StringedInstrument.h"

class Violin : public StringedInstrument {

public:
    Violin(int numberOfStrings);
    Violin();

    void play() override;

private:
    std::string _sound;

};


#endif //INSTRUMENTS_VIOLIN_H
