/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 02
*/

#include "SickKoala.hpp"
#include <regex>

SickKoala::~SickKoala()
{
    std::cout << "Mr." << this->name << ": Kreooogg!! I'm cuuuured!" << std::endl;
}

SickKoala::SickKoala(std::string str)
{
    this->name = str;
}

void SickKoala::poke()
{
    std::cout << "Mr." << this->name << ": Gooeeeeerrk!!" << std::endl;
}

bool SickKoala::takeDrug(std::string str)
{
    if (str == "Mars"){
    std::cout << "Mr." << this->name << ": Mars, and it kreogs!" << std::endl;
        return true;
    }
    if (str == "Kinder"){
    std::cout << "Mr." << this->name << ": There is a toy inside!" << std::endl;
        return true;
    }
    std::cout << "Mr." << this->name << ": Goerkreog!" << std::endl;

    return false;
}

void SickKoala::overDrive(std::string str)
{
    std::string order = "1337!";
    std::string output = regex_replace(str, std::regex("Kreog"), order);
    std::cout << "Mr." << this->name << ": " << output << std::endl;

}

std::string SickKoala::getName()
{
    return this->name;
}