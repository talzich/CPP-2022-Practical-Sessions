#include <iostream>

class Base
{
    void virtual dummy(){}
};

class Derived : public Base
{};

class DerivedB : public Base
{};

int main()
{
    Base *d1 = new DerivedB();
    Derived *d2 = dynamic_cast<Derived*>(d1);
    if(d2)
    {
        std::cout << "Casting successful" << std::endl;
    }
    else
    {
        std::cout << "Casting failed" << std::endl;       
    }
    DerivedB *d3 = dynamic_cast<DerivedB*>(d1);
    if(d3)
    {
        std::cout << "Casting successful" << std::endl;
    }
    else
    {
        std::cout << "Casting failed" << std::endl;       
    }
    return 0;
}