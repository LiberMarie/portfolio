/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 02
*/

#ifndef KOALA
#define KOALA

#include <iostream>

class SickKoala
{
    
    public:
        std::string name;
        SickKoala(std::string str);
        ~SickKoala();
        void poke();
        bool takeDrug(std::string str);
        void overDrive (std::string str);
        std::string getName();
};

#endif // KOALA