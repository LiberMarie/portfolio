/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 02
*/
#ifndef KOALA_NURSE
#define KOALA_NURSE

#include <iostream>
#include "SickKoala.hpp"

class KoalaNurse
{
    int ID;
    bool working;
    public:
        KoalaNurse(int ID);
        ~KoalaNurse();
        void giveDrug(std::string drugName, SickKoala *pacient);
        std::string readReport (std::string fileName);
        void timeCheck();
        int getId();
};

#endif 