//
// Created by Jan Kozub on 14/03/2024.
//

#include "Employee.h"
#include <cstdio>
#include <utility>

void Employee::introduceYourself() const {
    printf("%s, %s, %d\n", this->name.c_str(), this->surname.c_str(), this->salary);
}

Employee::Employee(std::string name, std::string surname, int salary)
        : name(std::move(name)), surname(std::move(surname)), salary(salary) {}

const std::string &Employee::getName() const {
    return name;
}

void Employee::setName(const std::string &name) {
    Employee::name = name;
}

const std::string &Employee::getSurname() const {
    return surname;
}

void Employee::setSurname(const std::string &surname) {
    Employee::surname = surname;
}

void Employee::setSalary(int salary) {
    Employee::salary = salary;
}

int Employee::getSalary() const {
    return salary;
}

void Employee::changeSalary(Employee& employee, int salary) {
    employee.salary = salary;
}
