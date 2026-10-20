#include "Student.hpp"

Student::Student(const std::string& name, double score)
    : name_(name), score_(score) {}

const std::string& Student::getName() const {
    return name_;
}

double Student::getScore() const {
    return score_;
}
