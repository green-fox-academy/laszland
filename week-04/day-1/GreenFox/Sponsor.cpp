#include "Sponsor.h"

Sponsor::Sponsor() : _company("Google"), _hiredStudents(0) {}

Sponsor::Sponsor(const std::string &name, int age, const std::string &gender, const std::string &company):
    Person(name, age, gender), _company(company), _hiredStudents(0) {}

void Sponsor::introduce() {
    std::cout << "Hi, my name is " << _name << " a " << _age << " year old " << _gender << " who represents " <<
                 _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

int Sponsor::hire() {
    _hiredStudents += 1;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}
