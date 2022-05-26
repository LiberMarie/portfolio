
#include "Skat.hpp"

int main (void)
{
    Skat s;

    std::cout << "Soldier " << s.name() << std::endl;
    std::cout << s.stimPaks() << std::endl;
    s.status();
    s.useStimPaks();
    return 0;
}