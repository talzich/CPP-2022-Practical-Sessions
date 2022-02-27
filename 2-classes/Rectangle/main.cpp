// write a main file and use the Rectangle class

#include <iostream>
#include <string>

#include "Rectangle.hpp"

int main(){
    zich::Rectangle *r = new zich::Rectangle(5, 5);
    std::cout << r->get_height() << std::endl;
    return 0;
}