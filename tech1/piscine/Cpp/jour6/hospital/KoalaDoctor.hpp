/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 04
*/

#ifndef KOALA_DOCTOR
#define KOALA_DOCTOR
#include <iostream>
#include "SickKoala.hpp"

class KoalaDoctor
{
    std::string name;
    bool working;
    public:
        KoalaDoctor(std::string name);
        ~KoalaDoctor();
        void diagnose(SickKoala *patient);
        void timeCheck();
        std::string getName();
};

#endif