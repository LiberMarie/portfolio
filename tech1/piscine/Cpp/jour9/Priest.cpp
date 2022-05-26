/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Priest
*/

#include "Priest.hpp"

Priest::Priest(const std::string &name, int power) : Peasant (name, power), Enchanter(name, power)
{
    if (power > 100) 
        this->_power = 100;
    else
        this->_power = power;
    std::cout << name << " enters in the order." << std::endl;
}

Priest::~Priest()
{
    std::cout << this->getName() << " finds peace." << std::endl;
}

void Priest::rest()
{
    this->_power = 100;
    this->_Hp = 100;
    std::cout << this->getName() << " prays." << std::endl;
}
