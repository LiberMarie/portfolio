/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Lemon
*/

#include "Lemon.hpp"

Lemon::Lemon() : Fruit("lemon", 3)
{
}

Lemon::~Lemon()
{

}

std::string Lemon::getName() const
{
    return this->_name;
}