/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD09-marie.liber
** File description:
** Priest
*/

#ifndef PRIEST_HPP_
#define PRIEST_HPP_
#include "Enchanter.hpp"

class Priest : public Enchanter {
    public:
        Priest(const std::string &name, int power);
        ~Priest();
        void rest();
    protected:
    private:
};

#endif /* !PRIEST_HPP_ */
