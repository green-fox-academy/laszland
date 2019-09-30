#include "Person.h"
#include <vector>


void Person::setName(const std::string &name) {
    _name = name;
}

void Person::setAge(int age) {
    _age = age;
}

void Person::setGender(const std::string &gender) {
    _gender = gender;
}
Person::Person(const std::string &name, int age, const std::string &gender): _name(name), _age(age), _gender(gender) {}

Person::Person():  _name("Jane Doe"), _age(30), _gender("female") {}

void Person::introduce() {
    std::cout << "Hi, my name is " << _name << " , a " << _age << " years old " << _gender << "." << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the Moment." << std::endl;
}