/*
** EPITECH PROJECT, 2022
** undefined
** File description:
** Peasent
*/

#ifndef PEASENT_HPP_
#define PEASENT_HPP_

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class Peasant : public ICharacter
{
    public:
        Peasant(const std::string &name, int power);
        Peasant(Peasant const &prso);
        ~Peasant();
        const std::string &getName() const;
        int getPower() const;
        int getHp() const;
        int attack();
        int special();
        void rest();
        void damage(int damage);
    protected:
        const std::string _name;
        int _power;
        int _Hp;
    private:
};

#endif /* !PEASENT_HPP_ */
