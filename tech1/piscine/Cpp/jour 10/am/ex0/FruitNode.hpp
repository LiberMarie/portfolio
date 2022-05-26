/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD010am-marie.liber
** File description:
** FruitNode
*/

#ifndef FRUITNODE_HPP_
#define FRUITNODE_HPP_

#include <iostream>
#include "Fruit.hpp"

typedef struct fruitNode_s
{
    Fruit * _fruit;
    fruitNode_s *next;
}fruitNode;



#endif 
