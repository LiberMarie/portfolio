/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** KoalaBot
*/

#include "KoalaBot.hpp"

KoalaBot::KoalaBot(std::string serial)
{
    this->_serial = serial;
}

KoalaBot::~KoalaBot()
{
}

void KoalaBot::setParts(Legs& legs)
{
    this->_legs = legs;
}
void KoalaBot::setParts(Arms& arms)
{
    this->_arms = arms;
}
void KoalaBot::setParts(Head& head)
{
    this->_head = head;
}

void KoalaBot::swapParts(Legs& legs)
{
    this->_legs = legs;
}
void KoalaBot::swapParts(Arms& arms)
{
    this->_arms = arms;
}
void KoalaBot::swapParts(Head& head)
{
    this->_head = head;
}

void KoalaBot::informations()
{
    std::cout << "[KoalaBot] " << this->_serial << std::endl;
    this->_arms.informations();
    this->_legs.informations();
    this->_head.informations();
}

bool KoalaBot::status()
{
    if (this->_arms.isFunctional() && this->_head.isFunctional() && this->_legs.isFunctional())
        return (true);
    return (false);
}