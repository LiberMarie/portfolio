/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Fruit
*/

#include "Fruit.hpp"

Fruit::Fruit(std::string const& name, int vit) : _name(name), _vitamins(vit)
{
}

Fruit::~Fruit()
{
}



int Fruit::getVitamins() const
{
    return this->_vitamins;
}

std::string Fruit::getName() const
{
    return this->_name;
}