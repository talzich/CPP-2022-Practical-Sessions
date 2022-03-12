// write a main file and use the Rectangle class

#include <iostream>
#include <string>

#include "Rectangle.hpp"

int main(){
    zich::Rectangle *rect = new zich::Rectangle(5.0, 3.0);
    zich::Rectangle *rect2 = new zich::Rectangle(7, 8);

    std::cout << rect->get_height() << std::endl;
    std::cout << rect2->get_height() << std::endl;

    std::cout << rect->get_color() << std::endl;
    std::cout << rect2->get_color() << std::endl;

    zich::Rectangle::set_color("Blue");
    std::cout << rect->get_color() << std::endl;
    std::cout << rect2->get_color() << std::endl;

    rect->set_color("Red");
    std::cout << rect->get_color() << std::endl;
    std::cout << rect2->get_color() << std::endl;
    return 0;
}