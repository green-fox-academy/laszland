#ifndef GREENFOX_PERSON_H
#define GREENFOX_PERSON_H

#include <iostream>
#include <vector>
#include <string>

class Person {

public:
    // setters for private variables
    void setName(const std::string &name);
    void setAge(int age);
    void setGender(const std::string &gender);

    // constructor for object Person
    Person(const std::string &name, int age, const std::string &gender);
    Person();

    // functions
    virtual void introduce();
    virtual void getGoal();

protected:
    std::string _name;
    int _age;
    std::string _gender;


};


#endif //GREENFOX_PERSON_H
