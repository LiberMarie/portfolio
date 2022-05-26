/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD11-marie.liber
** File description:
** Buzz
*/

#ifndef BUZZ_HPP_
#define BUZZ_HPP_
#include "Toy.hpp"
class Buzz : public Toy {
    public:
        Buzz(std::string name, const std::string &filename = "buzz.txt");
        ~Buzz();
        void speak(std::string message);
    protected:
    private:
};

#endif /* !BUZZ_HPP_ */
