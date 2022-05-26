/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Paladin
*/

#ifndef PALADIN_HPP_
#define PALADIN_HPP_
#include "Knight.hpp"
#include "Priest.hpp"

class Paladin : public Knight, public Priest
{
    public:
        Paladin(const std::string &name, int power);
        ~Paladin();
      //  virtual int attack() = 0;
        using Knight::attack;
        using Enchanter::special;
        using Priest::rest;
    protected:
    private:
};

#endif /* !PALADIN_HPP_ */
