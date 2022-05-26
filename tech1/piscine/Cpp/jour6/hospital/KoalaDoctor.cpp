/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 04
*/

#include "KoalaDoctor.hpp"
#include "SickKoala.hpp"
#include <cstdlib>
#include <fstream>
#include <stdlib.h>

KoalaDoctor::KoalaDoctor(std::string name)
{
    this->name = name;
    std::cout << "Dr." << name << ": I'm Dr" << name << "! How do you kreog?" << std::endl;
}

KoalaDoctor::~KoalaDoctor()
{
  //  std::cout << "Nurse " << this->name << ": Finally some rest!" << std::endl;
}

void KoalaDoctor::diagnose(SickKoala *patient)
{
    std::cout << "Dr." << this->name << ": So what's goerking you Mr." << patient->name << "?" << std::endl;
    patient->poke();
    std::string medoc;
    int x = rand()%5 + 1;
    if (x == 1)
        medoc = "Mars";
    if (x == 2)
        medoc = "Kinder";
    if (x == 3)
        medoc = "Crunch";
    if (x == 4)
        medoc = "Maroilles";
    if (x == 5)
        medoc = "Eucalyptus leaf";
    std::cout << "valeur de x " << medoc << std::endl;
    std::string file = patient->getName() + ".report";
    std::ofstream fich(file.c_str());
    fich << medoc;
}

void KoalaDoctor::timeCheck()
{
    if (this->working == true){
        std::cout << "Dr." << this->name << ": Time to get to work!" << std::endl;
        this->working = false;
    }
    else{
        std::cout << "Dr." << this->name << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->working = true;
    }
}

std::string KoalaDoctor::getName()
{
    return this->name;
}