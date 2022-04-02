#include <iostream>
#include <string>


class Printable
{
    public:
        virtual std::string get_class_name() const = 0;
};

class A : public Printable
{
    public:
        std::string get_class_name() const override { return "A"; }
};

class B : public A
{
    public:
        std::string get_class_name() const override { return "B"; }
};

void print_class_name(const Printable &p){ std::cout << p.get_class_name() << std::endl; }

int main()
{
    Printable *a = new A();
    Printable *b = new B();
    print_class_name(*a);
    print_class_name(*b);
    return 0;
}