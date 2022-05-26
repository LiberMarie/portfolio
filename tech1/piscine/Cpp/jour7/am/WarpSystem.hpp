/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 00
*/

#ifndef WarpSystem_
#define WarpSystem_

namespace WarpSystem
{
    class QuantumReactor
    {
        public:
        bool _stability = true;
        bool isStable();
        void setStability(bool stability);

    };
    class Core
    {
        public:
        QuantumReactor *_coreReactor;
        Core(QuantumReactor * reactor);
        QuantumReactor *checkReactor();

    };
}

#endif