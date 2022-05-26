/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** FruitBox
*/

#include "FruitBox.hpp"

FruitBox::FruitBox(int size) : _size(size)
{
    this->current_fruit = 0;
    this->list = NULL;
}

FruitBox::~FruitBox()
{
}

int FruitBox::nbFruits()
{
    return this->current_fruit;
}

bool FruitBox::putFruit(Fruit *f)
{
    if (f == NULL)
        return false;
    if (this->current_fruit >= this->_size)
        return false;
    fruitNode *node = new fruitNode();
    node->_fruit = f;
    fruitNode *tmp = this->list;
    if (tmp == NULL){
        tmp = node;
        tmp->next = NULL;
        this->list = tmp;
        this->current_fruit = this->current_fruit + 1;
        return true;
    }
    while (tmp->next != NULL) {
        if (tmp->_fruit == f)
            return false;
        tmp = tmp->next;
    }
    tmp->next = node;
    node->next = NULL;
    this->current_fruit = this->current_fruit + 1;
    this->list = tmp;
    return true;
}

fruitNode *FruitBox::head()
{
    if (this->current_fruit == 0)
        return NULL;
    return this->list;
}

Fruit *FruitBox::pickFruit()
{
    if (this->list == NULL)
        return NULL;
    //if (this->list->next == NULL){
    //    this->list = NULL;
    //    return this->list->_fruit;
    //}
    fruitNode* node = this->list; //recupere la list
    Fruit* fruit = this->list->_fruit; //recupere le fruit de la premier node
    this->list = this->list->next; //poitn vers la nv 1er node
    delete node; //del node
    this->current_fruit = this->current_fruit - 1; //enleve 1 de la taille
    return fruit;
}