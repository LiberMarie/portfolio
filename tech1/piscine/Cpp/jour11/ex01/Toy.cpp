/*
** EPITECH PROJECT, 2022
** ex00
** File description:
** Toy
*/

#include "Toy.hpp"

Toy::Toy(ToyType type, std::string name, const std::string &filename)
{
    this->_name = name;
    this->_Picture = filename;
    this->_ToyType = type;

}
Toy::Toy()
{
    this->_Picture.data = "";
    this->_name = "toy";
    this->_ToyType = BASIC_TOY;
}

Toy::Toy(const Toy&copie)
{
    this->_ToyType = copie._ToyType;
    this->_name = copie._name;
    this->_Picture = copie._Picture;
}

Toy::~Toy()
{
}

int Toy::getType() const
{
    return this->_ToyType;
}
std::string Toy::getName() const
{
    return this->_name;
}
void Toy::setName(const std::string &name)
{
    this->_name = name;
}

bool Toy::setAscii(const std::string &filename)
{
    return this->_Picture.getPictureFromFile(filename);
}
std::string Toy::getAscii() const
{
    return this->_Picture.data;
}

Toy &Toy::operator=(const Toy& copie)
{
    this->_ToyType = copie._ToyType;
    this->_name = copie._name;
    this->_Picture = copie._Picture;
    return *this;
}