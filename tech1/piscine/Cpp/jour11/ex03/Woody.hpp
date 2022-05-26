/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** Woody
*/

#ifndef WOODY_HPP_
#define WOODY_HPP_
#include "Toy.hpp"

class Woody : public Toy
{
    public:
        Woody(std::string name, const std::string &filename = "./woody.txt");
        ~Woody();
        void speak(std::string message);
    protected:
    private:
};

#endif /* !WOODY_HPP_ */
