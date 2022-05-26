/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07am-marie.liber
** File description:
** Phaser
*/

#ifndef PHASER_HPP_
#define PHASER_HPP_
#include <iostream>

class Phaser {
    public:
        enum AmmoType {
            Regular,
            Plasma,
            Rocket
        };
        Phaser(int ammos = 20, std::string ammoType = "Regular");
        ~Phaser();

        void fire();
        void ejectClip();
        void changeType(AmmoType newType);
        void reload();
        void addAmmo(AmmoType type);
        int getCurrentAmmos();
    private:
        static const int Empty = 0;
        const std::string _ammoType;
        int _maxAmmos;
        int _ammos;


};

#endif /* !PHASER_HPP_ */
