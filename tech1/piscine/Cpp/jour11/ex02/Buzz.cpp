/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** Buzz
*/

#include "Buzz.hpp"

Buzz::Buzz(std::string name, const std::string &filename)
{
    this->_name = name;
    this->_Picture = filename;
    this->_ToyType = BUZZ;
}

Buzz::~Buzz()
{
}

