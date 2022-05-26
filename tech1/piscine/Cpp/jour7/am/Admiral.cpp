#include "Admiral.hpp"

Federation::Starfleet::Admiral::Admiral(std::string name)
{
    this->_name = name;
    std::cout << "Admiral " << name << " ready for action."<< std::endl;
}

Federation::Starfleet::Admiral::~Admiral()
{

}