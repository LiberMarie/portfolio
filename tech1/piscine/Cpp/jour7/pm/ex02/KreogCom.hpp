/*
** EPITECH PROJECT, 2022
** B-PDG-300-NCY-3-1-PDGD07pm-marie.liber
** File description:
** KreogCom
*/

#ifndef KREOGCOM_HPP_
#define KREOGCOM_HPP_

#include <iostream>


class KreogCom {
    public:
        KreogCom(int x, int y, int serial);
        ~KreogCom();
        void addCom(int x, int y, int serial);
        void removeCom();
        KreogCom *getCom();
        void ping();
        void locateSquad();
    private:
        const int m_serial;
        int _x;
        int _y;
        KreogCom* _next;
};

#endif /* !KREOGCOM_HPP_ */
