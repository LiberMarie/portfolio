#include "Droid.hpp"

Droid::Droid(std::string number)
{
    this->_Id = number;
    this->_Energy = 50;
    this->_Attack = new size_t(25);
    this->_Toughness = new size_t(15);
    this->_Status = new std::string("Standing by");
    std::cout << "Droid '" << this->_Id << "' Activated" << std::endl;
}
Droid::Droid()
{
    this->_Id = "";
    this->_Energy = 50;
    this->_Attack = 25;
    this->_Toughness = 15;
    this->_Status = new std::string("Standing by");
    std::cout << "Droid '" << this->_Id << "' Activated" << std::endl;
}
Droid::~Droid()
{
    delete this->_Status;
    std::cout << "Droid '" << this->_Id << "' Destroyed" << std::endl;
}

Droid::Droid(Droid& copied)
{
    this->_Id = copied._Id;
    this->_Status = new std::string(*copied._Status);
    this->_Energy = copied._Energy;
    std::cout << "Droid '" << this->_Id << "' Activated, Memory Dumped" << std::endl;

}

size_t Droid::getAttack()
{
    return this->_Attack;
}
size_t Droid::getToughness()
{
    return this->_Toughness;
}
std::string Droid::getId()
{
    return this->_Id;
}
size_t Droid::getEnergy()
{
    return this->_Energy;
}
std::string *Droid::getStatus()
{
    return this->_Status;
}
void Droid::setId(std::string id)
{
    this->_Id = id;
}
void Droid::setEnergy(size_t energy)
{
    this->_Energy = energy;
}
void Droid::setStatus(std::string *status)
{
    this->_Status = status;
}

bool Droid::operator==(const Droid &other) const
{
    if (this->_Id == other._Id && this->_Attack == other._Attack && this->_Toughness == other._Toughness && this->_Energy == other._Energy && this->_Status == other._Status)
        return true;
    return false;
}

Droid& Droid::operator=(const Droid &other)
{
    Droid tmp = Droid::Droid(other)
}

bool Droid::operator!=(const Droid &other) const
{
    if (this->_Id == other._Id && this->_Attack == other._Attack && this->_Toughness == other._Toughness && this->_Energy == other._Energy && this->_Status == other._Status)
        return false;
    return true;
}

Droid& Droid::operator<<(size_t &energy)
{
    if (this->_Energy + energy <= 100){
        this->_Energy = this->_Energy + energy;
        energy = 0;
    }
    else{
        energy = this->_Energy + energy - 100;
        this->_Energy = 100;
    }
    return *this;
}



std::ostream& operator<<(std::ostream& os, Droid &other)
{
    os << "'" << other.getId() << "', " << *other.getStatus() << ", " << other.getEnergy();
    return os;
}