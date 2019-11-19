#include "Mentor.h"
#include <vector>
#include <iostream>

Mentor::Mentor() : _level("intermediate") {}

Mentor::Mentor(const std::string &name,
               int age,
               const std::string &gender,
               const std::string &level) :
                   Person(name, age, gender),
                   _level(level) {}
void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

void Mentor::introduce() {
    std::cout << "Hi, my name is " << _name << " a " << _age << " year old " << _gender << " " <<
                 _level << " mentor." << std::endl;
}
