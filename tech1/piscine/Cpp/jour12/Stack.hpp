/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD12-marie.liber
** File description:
** Stack
*/

#ifndef STACK_HPP_
#define STACK_HPP_
#include <stack>

class Stack {
    public:
        Stack();
        ~Stack();
        void push(double value);
        double top() const;
        double pop();
        void add();
        void sub();
        void mul();
        void div();
    protected:
        std::stack <double> stack;
};

#endif /* !STACK_HPP_ */
