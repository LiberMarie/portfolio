#include "Picture.hpp"
#include <fstream>
#include <memory>
#include <string>
#include "Toy.hpp"
#include "Woody.hpp"
#include "Buzz.hpp"

void testEx02()
{
    Woody W("woooooooody", "./woody.txt");
    Buzz B("buzz");
    if (W.getType() == Toy::WOODY)
        std::cout << "I'm a Woody" << std::endl;
    std::cout << "this alien is: " << W.getName() << std::endl
            << W.getAscii() << std::endl;
    if (B.getType() == Toy::BUZZ)
        std::cout << "I'm a Woody" << std::endl;
    std::cout << "this alien is: " << B.getName() << std::endl
            << B.getAscii() << std::endl;
}

void testEx03()
{
    std::unique_ptr<Toy> b (new Buzz("Buzziii"));
    std::unique_ptr<Toy> w (new Woody("wood"));
    std::unique_ptr<Toy> t (new Toy(Toy::ALIEN, "ET", "../alien.txt"));
    b->speak("To the code , and beyond !!!!!!!!") ;
    w->speak("There's a snake in my boot.") ;
    t->speak("the claaaaaaw");

}

void testEx04()
{
    Toy a(Toy::BASIC_TOY, "REX","../rex.txt");
    std::cout << a ;
    a << "\\o/";
    std::cout << a;
}

int main ()
{
    testEx04();
    return 0;   
}