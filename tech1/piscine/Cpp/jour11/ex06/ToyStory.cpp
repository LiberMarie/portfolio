/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** ToyStory
*/

#include "ToyStory.hpp"

ToyStory::ToyStory()
{
}

ToyStory::~ToyStory()
{
}

bool ToyStory::tellMeAStory(std::string filename, Toy& toy2, bool (Toy::*func2)(std::string const& string2), Toy& toy1, bool (Toy::*func1)(std::string const& string1))
{
    std::cout << toy1.getAscii() << "\n" << toy2.getAscii() << std::endl;
}