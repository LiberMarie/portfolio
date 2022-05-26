/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** Woody
*/

#include "Woody.hpp"

Woody::Woody(std::string name, const std::string &filename) : Toy(WOODY, name, filename)
{
}

Woody::~Woody()
{
}
void Woody::speak(std::string message)
{
    std::cout << "WOODY: " << this->_name << " \"" << message << "\"" << std::endl;
}

bool Woody::speak_es(std::string message)
{
    message = "";
    this->_error.type = Error::SPEAK;
    return false;
}
