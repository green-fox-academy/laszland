#ifndef GREENFOX_SPONSOR_H
#define GREENFOX_SPONSOR_H


#include "Person.h"

class Sponsor : public Person {

public:
    // constructors
    Sponsor();
    Sponsor(const std::string &name, int age, const std::string &gender, const std::string &company);

    // functions
    void introduce();
    int hire();
    void getGoal();


private:
    std::string _company;
    int _hiredStudents;
};


#endif //GREENFOX_SPONSOR_H
