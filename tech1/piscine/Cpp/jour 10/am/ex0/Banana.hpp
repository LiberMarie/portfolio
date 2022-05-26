/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Banana
*/

#ifndef BANANA_HPP_
#define BANANA_HPP_

#include <iostream>
#include "Fruit.hpp"

class Banana : public virtual Fruit {
    public:
        Banana();
        ~Banana();
        std::string getName() const;
};

#endif /* !BANANA_HPP_ */
