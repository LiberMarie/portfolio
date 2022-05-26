/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Paladin
*/

#include "Paladin.hpp"

Paladin::Paladin(const std::string &name, int power) : Peasant(name, power), Knight(name, power), Priest(name, power)
{
    std::cout << name << " fights for the light." << std::endl;
}

Paladin::~Paladin()
{
    std::cout << this->_name << " is blessed." << std::endl;
}