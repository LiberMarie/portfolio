/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Lemon
*/

#ifndef LEMON_HPP_
#define LEMON_HPP_

#include <iostream>
#include "Fruit.hpp"

class Lemon : public virtual Fruit 
{
    public:
        Lemon();
        ~Lemon();
        std::string getName() const;
};

#endif /* !LEMON_HPP_ */
