#ifndef GREENFOX_STUDENT_H
#define GREENFOX_STUDENT_H

#include <string>
#include "Person.h"

class Student: public Person {

public:
    // constructors
    Student();
    Student(const std::string &name, int age, const std::string &gender, const std::string &previousOrganisation);

    // functions
    virtual void introduce();
    virtual void getGoal();
    int skipDays(int numberOfDays);

private:
    std::string _previousOrganisation;
    int _skippedDays;

};


#endif //GREENFOX_STUDENT_H
