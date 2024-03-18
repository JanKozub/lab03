//
// Created by Jan Kozub on 14/03/2024.
//

#ifndef LAB_03_INTERN_H
#define LAB_03_INTERN_H
#include "Employee.h"

class Intern : public Employee {
public:
    Intern(std::string name, std::string surname, int salary);

    void introduceYourself() override;
};


#endif //LAB_03_INTERN_H
