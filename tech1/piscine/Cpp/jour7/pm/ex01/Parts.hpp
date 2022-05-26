/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** Parts
*/

#ifndef PART_
#define PART_

#include <iostream>

class Arms
{
    public:
        Arms(std::string serial = "A-01", bool fonctionnal = true);
        ~Arms();
        bool isFunctional();
        std::string serial();
        void informations();
    private:
        std::string _serial;
        bool _fonctionnal;
};

class Legs
{
    public:
        Legs(std::string serial = "L-01", bool fonctionnal = true);
        ~Legs();
        bool isFunctional();
        std::string serial();
        void informations();
    private:
        std::string _serial;
        bool _fonctionnal;
};

class Head
{
    public:
        Head(std::string serial = "H-01", bool fonctionnal = true);
        ~Head();
        bool isFunctional();
        std::string serial();
        void informations();
    private:
        std::string _serial;
        bool _fonctionnal;
};

#endif