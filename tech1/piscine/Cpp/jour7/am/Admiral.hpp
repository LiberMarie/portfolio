#ifndef Admiral_
#define Admiral_
#include <iostream>
#include "WarpSystem.hpp"
#include "Destination.hpp"
#include "Borg.hpp"

namespace Federation
{
    namespace Starfleet
    {
        class Admiral
        {
            public:
                Admiral(std::string name);
                ~Admiral();
            private:
                std::string _name;
        };
    }
}

#endif //