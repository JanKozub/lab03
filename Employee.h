//
// Created by Jan Kozub on 14/03/2024.
//

#ifndef LAB_03_EMPLOYEE_H
#define LAB_03_EMPLOYEE_H
#include "string"

class Employee {
private:
    int salary;

protected:
    std::string name;
    std::string surname;

public:
    Employee(std::string name, std::string surname, int salary);
    std::string &getName();
    void setName(std::string &name);

    std::string &getSurname();
    void setSurname(std::string &surname);

    int getSalary();
    void setSalary(int salary);

    virtual void introduceYourself();

    friend class Manager;
};


#endif //LAB_03_EMPLOYEE_H
