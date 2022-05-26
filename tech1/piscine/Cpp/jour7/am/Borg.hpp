#ifndef BORG_
#define BORG_
#include "Federation.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Ship;
        class Captain;
        class Ensign;
    }
    class Ship;
}

namespace Borg
{
    class Ship
    {
        public:
            Ship(int _weaponFrequency = 20, short _repair = 3);
            Ship(int _weaponFrequency);
            ~Ship();
            void setupCore(WarpSystem::Core *core);
            void checkCore();
            int getShield();
            void setShield(int shield);
            int getWeaponFrequency();
            void setWeaponFrequency (int frequency);
            short getRepair();
            void setRepair(short repair);
            void fire(Federation::Starfleet::Ship *target);
            void fire(Federation::Ship *target);
            bool move(int warp, Destination d);
            bool move(int warp);
            bool move(Destination d);
            bool move();
            void repair();
        private:
            int _shield;
            int _side;
            int _maxWarp;
            Destination _location;
            Destination _home;
            WarpSystem::Core* _core;
            int _weaponFrequency;
            short _repair;
    };
}

#endif // BORG_