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
