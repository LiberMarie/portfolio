/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Enchanter
*/

#include "Enchanter.hpp"

Enchanter::Enchanter(const std::string &name, int power) : Peasant(name, power)
{
    if (power > 100) 
        this->_power = 100;
    else
        this->_power = power;
    std::cout << name << " learns magic from his spellbook." << std::endl;
}

Enchanter::~Enchanter()
{
    std::cout << this->_name << " closes his spellbook." << std::endl;

}


int Enchanter::attack()
{
    if (this->_Hp == 0){
        std::cout << this->getName() << " is out of power." << std::endl;
        return 0;
    }
    this->_power = this->_power;
    std::cout << this->getName() << " doesn't know how to fight." << std::endl;
    return (0);
}
int Enchanter::special()
{
    if (this->_power < 50){
        std::cout << this->getName() << " is out of power." << std::endl;
        return 0;
    }
    else if (this->_Hp == 0){
        std::cout << this->getName() << " is out of combat." << std::endl;
        return 0;
    }
    this->_power = this->_power - 50;
    std::cout << this->getName() << " casts a fireball." << std::endl;
    return 99;
}
void Enchanter::rest()
{
    this->_power = 100;
    std::cout << this->getName() << " meditates." << std::endl;
}