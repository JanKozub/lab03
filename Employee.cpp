//
// Created by Jan Kozub on 14/03/2024.
//

#include "Employee.h"

Employee::Employee(std::string name, std::string surname, int salary)
    : name(name), surname(surname), salary(salary) {}

std::string &Employee::getSurname(){
    return surname;
}

void Employee::setSurname(std::string &surname) {
    Employee::surname = surname;
}

std::string &Employee::getName() {
    return name;
}

void Employee::setName(std::string &name) {
    Employee::name = name;
}

int Employee::getSalary()  {
    return salary;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

void Employee::introduceYourself() {
    printf("%s, %s, %d\n", this->name.c_str(), this->surname.c_str(), this->salary);
}