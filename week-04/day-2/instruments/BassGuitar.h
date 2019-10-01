#ifndef INSTRUMENTS_BASSGUITAR_H
#define INSTRUMENTS_BASSGUITAR_H


#include "StringedInstrument.h"

class BassGuitar : public StringedInstrument {

public:
   BassGuitar(int numberOfStrings);
   BassGuitar();

    void play() override;

private:
    std::string _sound;

};


#endif //INSTRUMENTS_BASSGUITAR_H
