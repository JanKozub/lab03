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

    virtual void introduceYourself() const;

    const std::string &getName() const;

    void setName(const std::string &name);

    const std::string &getSurname() const;

    void setSurname(const std::string &surname);

    int getSalary() const;

    void setSalary(int salary);

    void changeSalary(Employee& employee, int salary);
};


#endif //LAB_03_EMPLOYEE_H
