/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** Skat
*/

#include "Skat.hpp"

Skat::Skat(const std::string &name, int stimPaks)
{
    this->namea = name;
    this->stimPaksa = stimPaks;
}

Skat::~Skat()
{

}

const std::string &Skat::name()
{
    return this->namea;
}

int &Skat::stimPaks()
{
    return this->stimPaksa;
}

void Skat::shareStimPaks(int number, int& stock)
{
    if (this->stimPaksa < number)
        std::cout << "Don't be greedy" << std::endl;
    else {
        stock = stock + number;
        this->stimPaksa = this->stimPaksa - number;
        std::cout << "Keep the change." << std::endl;
    }
}


void Skat::addStimPaks(unsigned int number)
{
    if (number == 0)
        std::cout << "Hey boya, did you forget something?" << std::endl;
    else
        this->stimPaksa = this->stimPaksa + number;
}

void Skat::useStimPaks()
{
    if (this->stimPaksa <= 0)
        std::cout << "Mediiiiiic" << std::endl;
    else{
        this->stimPaksa = this->stimPaksa - 1;
        std::cout << "Time to kick some ass and chew bubble gum." << std::endl;
    }
}

void Skat::status()
{
    std::cout << "Soldier " << this->namea << " reporting " << this->stimPaksa << " stimpaks remaining sir!" << std::endl;
}