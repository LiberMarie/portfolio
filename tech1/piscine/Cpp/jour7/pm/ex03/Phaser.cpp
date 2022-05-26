/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07am-marie.liber
** File description:
** Phaser
*/

#include "Phaser.hpp"

Phaser::Phaser(int ammos, std::string ammotype) : _ammos(ammos), _ammoType(ammotype)
{
    std::cout << this->_ammos << this->_maxAmmos << std::endl;
}

Phaser::~Phaser()
{

}


