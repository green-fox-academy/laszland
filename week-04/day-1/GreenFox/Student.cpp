//
// Created by Peter on 2019. 09. 30..
//

#include "Student.h"


Student::Student() : _previousOrganisation("The School of Life"), _skippedDays(0) {}

Student::Student(const std::string &name, int age, const std::string &gender, const std::string &previousOrganisation) : Person(name, age, gender), _previousOrganisation(previousOrganisation),
                                    _skippedDays(0) {}

void Student::introduce() {
    std::cout << "Hi, my name is " << _name << " , a " << _age << " years old " << _gender << " from "
     << _previousOrganisation << " who skipped " << _skippedDays << " days from the course already."<< std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: BE a junior developer." << std::endl;
}

int Student::skipDays(int numbOfDays){
    _skippedDays =+ numbOfDays;
}

