/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** KreogCom
*/

#include "KreogCom.hpp"

KreogCom::KreogCom(int x, int y, int serial) : m_serial(serial), _x(x), _y(y)
{
    this->_next = NULL;
    std::cout << "KreogCom " <<this->m_serial << " iitialized" <<std::endl;
}

KreogCom::~KreogCom()
{
    std::cout << "KreogCom " << this->m_serial << " shutting down" <<std::endl;
}

void KreogCom::addCom(int x, int y, int serial)
{
    if (this->_next == NULL){
        KreogCom *newKreog = new KreogCom(x, y, serial);
        this->_next = newKreog;
        newKreog->_next = NULL;
    }
    else{
        KreogCom *newKreog = new KreogCom(x, y, serial);
        KreogCom *temp = this->_next;
        this->_next = newKreog;
        newKreog->_next = temp;
    }
}

KreogCom *KreogCom::getCom()
{
    if (this->_next == NULL)
        return NULL;
    return this->_next;
}

void KreogCom::removeCom()
{
    if (this->_next != NULL){
        KreogCom *temp = this->_next;
        this->_next = this->_next->_next;
        delete temp;
    }
}

void KreogCom::ping()
{
    std::cout << "KreogCom " << this->m_serial << " currently at " << this->_x << " " << this->_y << std::endl;
}
void KreogCom::locateSquad()
{
    if (this->_next != NULL)
        this->_next->ping();
    this->ping();
    
}