/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 00
*/


//#include "WarpSystem.hpp"
#include <iostream>
#include "Federation.hpp"

Federation::Starfleet::Ship::Ship(int length, int width, std::string name, short maxWarp, int torpedo)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = maxWarp;
    this->_shield = 100;
    this->_home = EARTH;
    this->_location = this->_home;
    this->_photonTorpedo = torpedo;
    if (this->_photonTorpedo != 0)
        std::cout << "The ship USS " << this->_name << " has been finished.\nIt is " << this->_length <<" m in length and " <<this->_width << " m in width.\nIt can go to Warp "<< this->_maxWarp << "!" << "Weapons are set: " << this->_photonTorpedo << " torpedoes ready." << std::endl;
    else
        std::cout << "The ship USS " << this->_name << " has been finished.\nIt is " << this->_length <<" m in length and " <<this->_width << " m in width.\nIt can go to Warp "<< this->_maxWarp << "!" << std::endl;

}

Federation::Starfleet::Ship::Ship()
{
    this->_name = "Entreprise";
    this->_length = 289;
    this->_width = 132;
    this->_maxWarp = 6;
    this->_shield = 100;
    this->_home = VULCAN;
    this->_location = this->_home;
    this->_photonTorpedo = 0;
    std::cout << "The ship USS Entreprise has been finished .It is 289 m in length and 132 m in width .It can go to Warp 6!" << std::endl;
}

Federation::Ship::Ship(int length, int width, std::string name)
{
    this->_length = length;
    this->_width = width;
    this->_name = name;
    this->_maxWarp = 1;
    std::cout << "The independent ship " << this->_name << " just finished its construction.\nIt is " << this->_length <<" m in length and " <<this->_width << " m in width." << std::endl;
}

Federation::Starfleet::Ship::~Ship()
{

}

Federation::Ship::~Ship()
{

}

void Federation::Starfleet::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << "USS " << this->_name << ": The core is set." << std::endl;
}

void Federation::Ship::setupCore(WarpSystem::Core *core)
{
    this->_core = core;
    std::cout << this->_name << ": The core is set." << std::endl;
}

void Federation::Starfleet::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << "USS " << this->_name << ": The core is stable at the time." << std::endl;
    else
        std::cout << "USS " << this->_name << ": The core is unstable at the time." << std::endl;

}

void Federation::Ship::checkCore()
{
    if (this->_core->checkReactor()->isStable() == true)
        std::cout << this->_name << ": The core is stable at the time." << std::endl;
    else
        std::cout <<  this->_name << ": The core is unstable at the time." << std::endl;

}

Federation::Starfleet::Captain::Captain(std::string name)
{
    this->_name = name;
}

Federation::Starfleet::Captain::~Captain()
{

}

std::string Federation::Starfleet::Captain::getName()
{
    return this->_name;
}

int Federation::Starfleet::Captain::getAge()
{
    return this->_age;
}
        
void Federation::Starfleet::Captain::setAge(int age)
{
    this->_age = age;
}

void Federation::Starfleet::Ship::promote(Captain* captain)
{
    std::cout << captain->getName() << ": I'm glad to be the captain of the USS " << this->_name << "." << std::endl;
}

Federation::Starfleet::Ensign::Ensign(std::string name)
{
    this->_name = name;
    std::cout << "Ensign " << name << ", awaiting orders." << std::endl;
}

Federation::Starfleet::Ensign::~Ensign()
{

}

bool Federation::Starfleet::Ship::move(int warp, Destination d)
{
    if (this->_maxWarp >= warp && this->_location != d && this->_core->checkReactor()->isStable() == true)
        this->_location = d;
    return false;
}

bool Federation::Starfleet::Ship::move(int warp)
{
    return (move(warp, this->_home));
}
bool Federation::Starfleet::Ship::move(Destination d)
{
    return (move(this->_maxWarp, d));
}

bool Federation::Starfleet::Ship::move()
{
    return (move(this->_maxWarp, this->_home));
}

bool Federation::Ship::move(int warp, Destination d)
{
    if (this->_maxWarp >= warp && this->_location != d && this->_core->checkReactor()->isStable() == true)
        this->_location = d;
    return false;
}

bool Federation::Ship::move(int warp)
{
    return (move(warp, this->_home));
}
bool Federation::Ship::move(Destination d)
{
    return (move(this->_maxWarp, d));
}

bool Federation::Ship::move()
{
    return (move(this->_maxWarp, this->_home));
}

int Federation::Starfleet::Ship::getShield()
{
    return this->_shield;
}
void Federation::Starfleet::Ship::setShield(int shield)
{
    this->_shield = shield;
}
int Federation::Starfleet::Ship::getTorpedo()
{
    return this->_photonTorpedo;
}
void Federation::Starfleet::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

int Federation::Ship::getShield()
{
    return this->_shield;
}
void Federation::Ship::setShield(int shield)
{
    this->_shield = shield;
}
int Federation::Ship::getTorpedo()
{
    return this->_photonTorpedo;
}
void Federation::Ship::setTorpedo(int torpedo)
{
    this->_photonTorpedo = torpedo;
}

void Federation::Starfleet::Ship::fire(Borg::Ship *target)
{
    if (this->_photonTorpedo != 0){
        target->setShield(target->getShield() - 50);
        this->_photonTorpedo = this->_photonTorpedo - 1;
        std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining."<< std::endl;
    }
    else
        std::cout << this->_name << ": No more torpedo to fire, " << this->_captain->getName() << std::endl;

}

void Federation::Starfleet::Ship::fire(int torpedoes, Borg::Ship *target)
{
    if (this->_photonTorpedo <= torpedoes){
        target->setShield(target->getShield() - 50 * torpedoes);
        this->_photonTorpedo = this->_photonTorpedo - torpedoes;
        std::cout << this->_name << ": Firing on target. " << this->_photonTorpedo << " torpedoes remaining."<< std::endl;

    }
    else
        std::cout << this->_name << ": No enough torpedoes to fire, " << this->_captain << "!" << std::endl;
}

WarpSystem::Core* Federation::Ship::getCore()
{
    return this->_core;
}