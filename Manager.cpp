//
// Created by Jan Kozub on 14/03/2024.
//

#include "Manager.h"

Manager::Manager(const std::string &name, const std::string &surname, int earnings, int subordinates) :
        Employee(name, surname, earnings), subordinates(subordinates) {}

int Manager::getSubordinates() const {
    return subordinates;
}

void Manager::setSubordinates(int subordinates) {
    Manager::subordinates = subordinates;
}
