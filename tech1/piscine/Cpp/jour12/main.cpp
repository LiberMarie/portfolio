#include "Algorithm.hpp"
#include <iostream>
#include "Array.hpp"
#include "Stack.hpp"

void task00 (void)
{
    int a = 42;
    int b = 21;

    ::swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;
    std::cout << "min(a, b) = " << ::min(a, b) << std::endl;
    std::cout << "max(a, b) = " << ::max(a, b) << std::endl;
    std::cout << "clam(0, a, b) = " << ::clamp(0, a, b) << std::endl;

    std::string c = "ghi";
    std::string d = "abc";

    ::swap(c, d);
    std::cout << "c = " << c << " b = " << d << std::endl;
    std::cout << "min(c, d) = " << ::min(c, d) << std::endl;
    std::cout << "max(c, d) = " << ::max(c, d) << std::endl;
    std::cout << "clam( \"def\", c, d) = " << ::clamp(std::string("def"), c, d) << std::endl;
}

void task01()
{
    Array<int, 3> array;
    try{
        //std::cout << array[0] << std::endl;
        array[0] = 21;
        array[1] = 42;
        array[2] = 84;
        array[3] = 84;
        array[4] = 5;
    }
    catch(const std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << array << std::endl;
    array
        .convert<float>([](const int &v) {return static_cast<float>(v) / 10.f;})
        .forEach([](const float & v) {std::cout << v << std::endl;});
}

void task02 () {
    Stack stack;
    stack.push(42.21);
    stack.push(84.42);
    stack.push(21.12);
    stack.push(21.12);
    stack.push(21.12);
    stack.push(21.12);
    //std::cout << stack.pop() << std::endl;
    stack.add();
    stack.div();
    try {
        stack.mul();
    }
    catch (const std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    std::cout << stack.top() << std::endl;

}
int main (void)
{
    task02();
    return 0;
}