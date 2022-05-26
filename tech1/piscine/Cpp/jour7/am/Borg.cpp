#include "Borg.hpp"
#include <iostream>

Borg::Ship::Ship(int _weaponFrequency, short _repair)
{
    this->_side = 300;
    this->_maxWarp = 9;
    this->_shield = 100;
    this->_home = UNICOMPLEX;
    this->_location = this->_home;
    this->_weaponFrequency = _weaponFrequency;
    this->_repair = _repair;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
}

Borg::Ship::Ship(int _weaponFrequency)
{
    this->_side = 300;
    this->_maxWarp = 9;
    this->_shield = 100;
    this->_weaponFrequency = _weaponFrequency;
    this->_repair = 3;
    std::cout << "We are the Borgs. Lower your shields and surrender yourselves unconditionally.\nYour biological characteristics and technologies will be assimilated.\nResistance is futile." << std::endl;
}

Borg::Ship::~Ship()
{
}

void Borg::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
}

void Borg::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "Everything is in order." << std::endl;
    else
        std::cout << "Critical failure imminent." << std::endl;

}

int Borg::Ship::getShield()
{
    return this->_shield;
}
void Borg::Ship::setShield(int shield)
{
    this->_shield = shield;
}
int Borg::Ship::getWeaponFrequency()
{
    return this->_weaponFrequency;
}
void Borg::Ship::setWeaponFrequency (int frequency)
{
    this->_weaponFrequency = frequency;
}
short Borg::Ship::getRepair()
{
    return this->_repair;
}
void Borg::Ship::setRepair(short repair)
{
    this->_repair = repair;
}

void Borg::Ship::fire(Federation::Starfleet::Ship *target)
{
    std::cout << "Firing on target with " << this->getWeaponFrequency() << " GW frequency." << std::endl;
    target->setShield(target->getShield() - this->_weaponFrequency);
}

void Borg::Ship::fire(Federation::Ship *target)
{
    target->getCore()->checkReactor()->setStability(false);
    std::cout << "Firing on target with " << this->getWeaponFrequency() << " GW frequency." << std::endl;
}


bool Borg::Ship::move(int warp, Destination d)
{
    if (this->_maxWarp >= warp && this->_location != d && this->_core->checkReactor()->isStable() == true)
        this->_location = d;
    return false;
}

bool Borg::Ship::move(int warp)
{
    return (move(warp, this->_home));
}
bool Borg::Ship::move(Destination d)
{
    return (move(this->_maxWarp, d));
}

bool Borg::Ship::move()
{
    return (move(this->_maxWarp, this->_home));
}

void Borg::Ship::repair()
{
    if (this->_repair > 0){
        this->_repair = this->_repair - 1;
        this->_shield = 100;
        std::cout << "Begin shield re-initialisation... Done. Awaiting further instructions." << std::endl;
    }
    else
        std::cout << "Energy cells depleted, shield weakening." << std::endl;
}