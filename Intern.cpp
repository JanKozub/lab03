//
// Created by Jan Kozub on 14/03/2024.
//

#include "Intern.h"

Intern::Intern(std::string name, std::string surname, int salary)
    : Employee(name, surname, salary) {}

void Intern::introduceYourself() {
    Employee::introduceYourself();
}