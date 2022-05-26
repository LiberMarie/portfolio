#include <iostream>
#include "Errors.hpp"
#include "WaterReclaimer.hpp"

WaterReclaimer::WaterReclaimer() :
    _water(0),
    _started(false)
{
}

void    WaterReclaimer::start()
{

    _started = true;
    throw NasaError::getComponent();
}

void    WaterReclaimer::useWater(int water)
{
    _water -= water;
}

void    WaterReclaimer::generateWater()
{
    _water += 10;
}
