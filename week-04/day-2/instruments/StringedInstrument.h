#ifndef INSTRUMENTS_STRINGEDINSTRUMENT_H
#define INSTRUMENTS_STRINGEDINSTRUMENT_H

#include "Instrument.h"


class StringedInstrument : public Instrument {

public:
    StringedInstrument(int numberOfStrings, std::string sound);

    void virtual play();

protected:
    int _numberOfStrings;
    std::string _sound;
};


#endif //INSTRUMENTS_STRINGEDINSTRUMENT_H
