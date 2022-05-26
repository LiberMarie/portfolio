/*
** EPITECH PROJECT, 2021
** Paradigms Seminar
** File description:
** exercice 00
*/

#ifndef FEDERATION_
#define FEDERATION_
#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Borg.hpp"

namespace Borg
{
    class Ship;
}

namespace Federation
{
    namespace Starfleet
    {
        class Captain
        {
            public:
                Captain(std::string name);
                ~Captain();
                std::string getName();
                int getAge();
                void setAge(int age);
            private:
                std::string _name;
                int _age;
        };
        class Ship
        {
            public:
                Ship(int length, int width, std::string name, short maxWarp, int torpedo = 0);
                ~Ship();
                Ship();
                void setupCore(WarpSystem::Core *core);
                void checkCore();
                void promote(Captain* captain);
                bool move(int warp, Destination d);
                bool move(int warp);
                bool move(Destination d);
                bool move();
                int getShield();
                void setShield(int shield);
                int getTorpedo();
                void setTorpedo(int torpedo);
                void fire(Borg::Ship *target);
                void fire(int torpedoes, Borg::Ship *target);
            private:
                int _length;
                int _width;
                std::string _name;
                short _maxWarp;
                Captain *_captain;
                WarpSystem::Core* _core;
                Destination _location;
                Destination _home;
                int _shield;
                int _photonTorpedo;
        };
        class Ensign
        {
            public:
                Ensign(std::string name);
                ~Ensign();
            private:
                std::string _name;
        };
    }
    class Ship
    {
        public:
            Ship(int length, int width, std::string name);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            WarpSystem::Core* getCore();
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            int getShield();
            void setShield(int shield);
            int getTorpedo();
            void setTorpedo(int torpedo);
        private:
            int _length;
            int _width;
            std::string _name;
            short _maxWarp;
            WarpSystem::Core* _core;
            Destination _location;
            Destination _home;
            int _shield;
            int _photonTorpedo;
    };
}

#endif