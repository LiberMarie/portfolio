/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** ToyStory
*/

#ifndef TOYSTORY_HPP_
#define TOYSTORY_HPP_
#include "Toy.hpp"

class ToyStory {
    public:
        ToyStory();
        ~ToyStory();
        virtual bool tellMeAStory(std::string filename, Toy& toy1, , Toy& toy2,);
    protected:
    private:
};

#endif /* !TOYSTORY_HPP_ */
