/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** Parts
*/

#include "Parts.hpp"

Legs::Legs(std::string serial, bool fonctionnal)
{
    this->_serial = serial;
    this->_fonctionnal = fonctionnal;
}

Legs::~Legs()
{
}

Arms::Arms(std::string serial, bool fonctionnal)
{
    this->_serial = serial;
    this->_fonctionnal = fonctionnal;
}
Arms::~Arms()
{
}

Head::Head(std::string serial, bool fonctionnal)
{
    this->_serial = serial;
    this->_fonctionnal = fonctionnal;
}
Head::~Head()
{
}

bool Head::isFunctional()
{
    return this->_fonctionnal;
}

bool Arms::isFunctional()
{
    return this->_fonctionnal;
}

bool Legs::isFunctional()
{
    return this->_fonctionnal;
}

std::string Head::serial()
{
    return this->_serial;
}

std::string Legs::serial()
{
    return this->_serial;
}

std::string Arms::serial()
{
    return this->_serial;
}
    
void Head::informations()
{
    if (this->_fonctionnal == true)
        std::cout << "\t[Parts] Head " << this->_serial << " status : OK"<< std::endl;
    else
        std::cout << "\t[Parts] Head " << this->_serial << " status : KO"<< std::endl;
}

void Arms::informations()
{
    if (this->_fonctionnal == true)
        std::cout << "\t[Parts] Arms " << this->_serial << " status : OK"<< std::endl;
    else
        std::cout << "\t[Parts] Arms " << this->_serial << " status : KO"<< std::endl; 
}

void Legs::informations()
{
    if (this->_fonctionnal == true)
        std::cout << "\t[Parts] Legs " << this->_serial << " status : OK"<< std::endl;
    else
        std::cout << "\t[Parts] Legs " << this->_serial << " status : KO"<< std::endl;
}