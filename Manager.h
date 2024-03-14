//
// Created by Jan Kozub on 14/03/2024.
//

#ifndef LAB_03_MANAGER_H
#define LAB_03_MANAGER_H

#include "Employee.h"

class Manager : public Employee {
private:
    int subordinates;

public:
    Manager(const std::string &name, const std::string &surname, int earnings, int subordinates);

    int getSubordinates() const;

    void setSubordinates(int subordinates);

    friend void Employee::changeSalary(Employee& employee, int salary);
};


#endif //LAB_03_MANAGER_H
