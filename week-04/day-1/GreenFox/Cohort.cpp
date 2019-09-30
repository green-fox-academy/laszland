#include "Cohort.h"

Cohort::Cohort(const std::string &name): _name(name) {
    studentVec.clear();
    mentorVec.clear();
}

void Cohort::addStudent(Student *student) {
    studentVec.push_back(student);
}

void Cohort::addMentor(Mentor *mentors) {
    mentorVec.push_back(mentors);
}

void Cohort::info(){
    std::cout << "The " << _name << " cohort has " << studentVec.size() << " students and " << mentorVec.size() << " mentors." << std::endl;
}