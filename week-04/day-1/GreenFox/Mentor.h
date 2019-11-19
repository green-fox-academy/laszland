#ifndef GREENFOX_MENTOR_H
#define GREENFOX_MENTOR_H


#include "Person.h"

class Mentor : public Person {
public:
    // constructors
    Mentor();
    Mentor(const std::string &name, int age, const std::string &gender, const std::string &level);

    // functions
    void getGoal();
    void introduce();

private:
    std::string _level;
};


#endif //GREENFOX_MENTOR_H
