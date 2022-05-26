/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD12-marie.liber
** File description:
** Stack
*/

#include "Stack.hpp"
#include <cstddef>

Stack::Stack()
{
    std::stack <double> stack;
}

Stack::~Stack()
{
}

void Stack::push(double value)
{
    this->stack.push(value);
}

double Stack::top() const
{
    return stack.top();
}

double Stack::pop()
{
    double value = stack.top();
    this->stack.pop();
    return value;
}

void Stack::add()
{
    double value = this->pop();
    double second = this->pop();
    this->push(value + second);
}
void Stack::sub()
{
    double value = this->pop();
    double second = this->pop();
    this->push(value - second);
}
void Stack::mul()
{
    try{
    double value = this->pop();
    double second = this->pop();
    this->push(value * second);
    }
    
}
void Stack::div()
{
    double value = this->pop();
    double second = this->pop();
    this->push(value / second);
}