/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 00
*/

#include "WarpSystem.hpp"

bool WarpSystem::QuantumReactor::isStable()
{
    return this->_stability;
}

void WarpSystem::QuantumReactor::setStability(bool stability)
{
    this->_stability = stability;
}

WarpSystem::Core::Core(QuantumReactor *reactor)
{
    _coreReactor = reactor;
}

WarpSystem::QuantumReactor* WarpSystem::Core::checkReactor()
{
    return this->_coreReactor;
}

