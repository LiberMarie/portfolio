/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Banana
*/

#include "Banana.hpp"

Banana::Banana() : Fruit("banana", 5)
{
}

Banana::~Banana()
{
}

std::string Banana::getName() const
{
    return this->_name;
}