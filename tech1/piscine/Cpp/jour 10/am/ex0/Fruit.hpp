/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** Fruit
*/

#ifndef FRUIT_HPP_
#define FRUIT_HPP_
#include <iostream>
//#include "Banana.hpp"
//#include "Lemon.hpp"

class Fruit
{
    public:
        Fruit(std::string const& name, int vit);
        ~Fruit();
        int getVitamins() const;
        std::string getName() const;

    protected:
        std::string _name;
        int _vitamins;
    private:
};

#endif /* !FRUIT_HPP_ */
