/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** KoalaBot
*/

#ifndef KOALABOT_HPP_
#define KOALABOT_HPP_

#include <iostream>
#include "Parts.hpp"

class KoalaBot {
    public:
        KoalaBot(std::string serial = "Bob-01");
        ~KoalaBot();
        void setParts(Legs& legs);
        void setParts(Arms& arms);
        void setParts(Head& head);
        void swapParts(Legs& legs);
        void swapParts(Arms& arms);
        void swapParts(Head& head);
        void informations();
        bool status();
    private:
        std::string _serial;
        Legs _legs;
        Arms _arms;
        Head _head;
};

#endif /* !KOALABOT_HPP_ */
