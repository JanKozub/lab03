//
// Created by Jan Kozub on 14/03/2024.
//

#include "Manager.h"

Manager::Manager(std::string name, std::string surname, int salary, int subordinates)
    : Employee(name, surname, salary), subordinates(subordinates)  {}

int Manager::getSubordinates() const {
    return subordinates;
}

void Manager::setSubordinates(int subordinates) {
    Manager::subordinates = subordinates;
}

void Manager::introduceYourself() {
    Employee::introduceYourself();
}

void Manager::changeSalary(Employee &s, int change) {
    s.salary=change;
}
