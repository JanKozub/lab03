//
// Created by Jan Kozub on 14/03/2024.
//

#include "Intern.h"

Intern::Intern(const std::string &name, const std::string &surname, int salary) : Employee(name, surname, salary) {}

std::string Intern::getName() {
    return name;
}

std::string Intern::getSurname() {
    return surname;
}

void Intern::setName(std::string name) {
    this->name = name;
}

void Intern::setSurname(std::string surname) {
    this->surname = surname;
}

void Intern::introduceYourself() const {
    Employee::introduceYourself();
}

