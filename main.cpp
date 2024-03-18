#include <iostream>
#include "Employee.h"
#include "Intern.h"
#include "Manager.h"

int main() {
    Employee employee("tomek", "czips", 4200);
    employee.introduceYourself();

    Manager manager("marek", "ogonek", 6921, 37);

    manager.introduceYourself();
    printf("salary: %d\n", manager.getSalary());
    printf("subords: %d\n", manager.getSalary());

    Intern intern("basia", "asia", 3000);
    intern.introduceYourself();

    manager.changeSalary(employee, 100);
    manager.changeSalary(manager, 200);
    manager.changeSalary(intern, 300);

    employee.introduceYourself();
    manager.introduceYourself();
    intern.introduceYourself();

    return 0;
}
