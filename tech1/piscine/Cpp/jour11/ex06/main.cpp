#include "Picture.hpp"
#include <fstream>
#include <memory>
#include <string>
#include "Toy.hpp"
#include "Woody.hpp"
#include "Buzz.hpp"
#include "ToyStory.hpp"

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

void testEx05()
{
    Woody w("wood");
    if (w.setAscii("file_who_does_not_exist.txt") ==  false)
    {
        auto e = w.getLastError();
        if (e.type == Toy::Error::PICTURE){
            std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
        }
    }
    if (w.speak_es("woody is not speack") ==  false)
    {
        auto e = w.getLastError();
        if (e.type == Toy::Error::SPEAK){
            std::cout << "Error in " << e.where() << ": " << e.what() << std::endl;
        }
    }

}

void testEx06()
{
    Buzz b("buzzi");
    Woody w("Wood");
    ToyStory::tellMeAStory("superStory.txt", b, &Toy::speak_es, w, &Toy::speak);
}

int main ()
{
    testEx06();
    return 0;   
}