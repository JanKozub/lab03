#include <iostream>
#include "Employee.h"
#include "Manager.h"
#include "Intern.h"

/*
Stwórz hierarchię klas reprezentujących różne typy pracowników w firmie.

Wymagania:

X Klasa bazowa 'Employee' powinna zawierać informacje o imieniu, nazwisku i wynagrodzeniu.
X Klasa pochodna 'Manager' powinna dodatkowo zawierać informacje o liczbie podwładnych.
X Klasa pochodna 'Intern' nie powinna mieć możliwości dostępu do informacji o wynagrodzeniu.
X Wszystkie klasy powinny mieć metodę 'IntroduceYourself', która jest metodą wirtualną w klasie bazowej.

Klasa 'Manager' powinna mieć przyjaciela - funkcję 'ChangeSalary', która pozwala na zmianę wynagrodzenia dowolnego pracownika.

 Uruchom program dla przykładowych danych testując wszystkie funkcje - zapis wykonania umieść w komentarzu na końcu kodu
 */

int main() {
    std::cout << "Hello, World!" << std::endl;

    Employee employee("tomek", "czips", 4200);

    employee.introduceYourself();

    Manager manager("marek", "ogonek", 6921, 37);

    manager.introduceYourself();
    printf("salary: %d\n", manager.getSalary());
    printf("subords: %d\n", manager.getSalary());

    Intern intern("basia", "asia", 1137);

    intern.introduceYourself();


    return 0;
}
