#ifndef GREENFOX_COHORT_H
#define GREENFOX_COHORT_H

#include <iostream>
#include <string>
#include <vector>

#include "Student.h"
#include "Mentor.h"


class Cohort {

public:
    // constructor
    Cohort(const std::string &name);

    // functions
    void addStudent(Student* student);
    void addMentor(Mentor* mentors);
    void info();

private:
    std::string _name;
    std::vector<Student*> studentVec;
    std::vector<Mentor*> mentorVec;


};


#endif //GREENFOX_COHORT_H
