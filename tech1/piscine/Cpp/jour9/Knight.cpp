/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Knight
*/

#include "Knight.hpp"

Knight::Knight(const std::string &name, int power) : Peasant(name, power)
{
    if (power > 100) 
        this->_power = 100;
    else
        this->_power = power;
    std::cout << name << " vows to protect the kingdom." << std::endl;
}

Knight::~Knight()
{
    std::cout << this->getName() << " takes off his armor." << std::endl;
}

int Knight::attack()
{
    if (this->_power < 20){
        std::cout << this->getName() << "is out of power." << std::endl;
        return 0;
    }
    else if (this->_Hp == 0){
        std::cout << this->getName() << "is out of combat." << std::endl;
        return 0;
    }
    this->_power = this->_power - 20;
    std::cout << this->getName() << " strikes with his sword." << std::endl;
    return (20);
}
int Knight::special()
{
    if (this->_power < 30){
        std::cout << this->getName() << " is out of power." << std::endl;
        return 0;
    }
    else if (this->_Hp == 0){
        std::cout << this->getName() << " is out of combat." << std::endl;
        return 0;
    }
    this->_power = this->_power - 30;
    std::cout << this->getName() << " impales his enemy." << std::endl;
    return 50;
}
void Knight::rest()
{
    this->_power = this->_power + 50;
    if (this->_power > 100)
        this->_power = 100;
    std::cout << this->getName() << " eats." << std::endl;
}