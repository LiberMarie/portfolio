/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** Exercise 03
*/

#include "KoalaNurse.hpp"
#include <fstream>
#include <filesystem>

KoalaNurse::KoalaNurse(int ID)
{
    this->ID = ID;
}

KoalaNurse::~KoalaNurse()
{
    std::cout << "Nurse " << this->ID << ": Finally some rest!" << std::endl;
}

void KoalaNurse::giveDrug (std::string drugName, SickKoala* pacient)
{
    pacient->takeDrug(drugName);
}

std::string KoalaNurse::readReport (std::string fileName)
{
    std::string str;
    if (std::filesystem::exists(fileName)){
        std::ifstream file (fileName);
        std::getline (file, str);
        int x = fileName.find(".report");
        std::string patien = fileName.substr (0, x);
        if (!str.empty() && !patien.empty()){
            std::cout << "Nurse " << this->ID << ": Kreog! Mr." << patien << " needs a " << str << "!" << std::endl;
            return str;
        }
        else
            return("");
    }
    return ("");
}

void KoalaNurse::timeCheck()
{
    if (this->working == true){
        std::cout << "Nurse " << this->ID << ": Time to get to work!" << std::endl;
        this->working = false;
    }
    else{
        std::cout << "Nurse " << this->ID << ": Time to go home to my eucalyptus forest!" << std::endl;
        this->working = true;
    }
}

int KoalaNurse::getId()
{
    return this->ID;
}