//
// Created by Jan Kozub on 14/03/2024.
//

#ifndef LAB_03_INTERN_H
#define LAB_03_INTERN_H
#include "Employee.h"

class Intern : protected Employee {
public:
    Intern(const std::string &name, const std::string &surname, int salary);

    void introduceYourself() const override;

    void setName(std::string name);

    std::string getName();

    void setSurname(std::string surname);

    std::string getSurname();
};

#endif //LAB_03_INTERN_H
