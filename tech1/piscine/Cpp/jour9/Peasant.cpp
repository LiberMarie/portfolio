/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Peasent
*/

#include "Peasant.hpp"

Peasant::Peasant(const std::string &name, int power) : _name(name), _Hp(100)
{
    if (power > 100) 
        this->_power = 100;
    else
        this->_power = power;
    std::cout << name << " goes for an adventure." << std::endl;
}

Peasant::Peasant(Peasant const &prso) : _name(prso._name), _Hp(100)//, _power(prso._power)
{
}

Peasant::~Peasant()
{
    std::cout << this->getName() << " is back to his crops." << std::endl;
}

const std::string& Peasant::getName() const
{
    return this->_name;
}

int Peasant::getPower() const
{
    return this->_power;
}
int Peasant::getHp() const
{
    return this->_Hp;
}

int Peasant::attack()
{
    if (this->_power < 10){
        std::cout << this->getName() << " is out of power." << std::endl;
        return 0;
    }
    else if (this->_Hp == 0){
        std::cout << this->getName() << " is out of combat." << std::endl;
        return 0;
    }
    this->_power = this->_power - 10;
    std::cout << this->getName() << " tosses a stone." << std::endl;
    return (5);
}

int Peasant::special()
{
    if (this->_Hp == 0){
        std::cout << this->getName() << "is out of combat." << std::endl;
        return 0;
    }
    std::cout << this->getName() << " doesn't know any special move." << std::endl;
    return 0;
}

void Peasant::rest()
{
    if (this->_power >= 70)
        this->_power = 100;
    else
        this->_power = this->_power + 30;
    if (this->_Hp != 0)
        std::cout << this->getName() << " takes a nap." << std::endl;
    else
        std::cout << this->getName() << " is out of combat." << std::endl;
}

void Peasant::damage(int damage)
{
    if (damage >= this->_Hp){
        this->_Hp = 0;
        std::cout << this->getName() << " is out of combat." << std::endl;
    }
    else {
        this->_Hp = this->_Hp - damage;
        std::cout << this->getName() << " takes " << damage << " damage." << std::endl;
    }
}
