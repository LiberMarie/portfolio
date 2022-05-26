/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** FruitBox
*/

#ifndef FRUITBOX_HPP_
#define FRUITBOX_HPP_
#include "FruitNode.hpp"
#include "Fruit.hpp"

class FruitBox {
    public:
        FruitBox(int size);
        ~FruitBox();
        int nbFruits();
        bool putFruit(Fruit *fruit);
        fruitNode *head();
        Fruit *pickFruit();

    protected:
        int _size;
        fruitNode *list;
        int current_fruit;
    private:
};

#endif /* !FRUITBOX_HPP_ */
