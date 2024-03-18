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
    Manager(std::string name, std::string surname, int salary, int subordinates);

    int getSubordinates() const;

    void setSubordinates(int subordinates);

    void introduceYourself() override;

    void changeSalary(Employee &employee, int change);
};


#endif //LAB_03_MANAGER_H
