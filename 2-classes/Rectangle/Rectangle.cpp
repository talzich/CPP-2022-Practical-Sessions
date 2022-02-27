// write the implementation of the methods you declared in the header file
#include <string>

#include "Rectangle.hpp"

namespace zich{

    Rectangle::Rectangle(double height, double width){
        this->height = height;
        this->width = width;
    }

    Rectangle::~Rectangle(){}

    double Rectangle::get_height(){ return this->height; }

    double Rectangle::get_width(){ return this->width; }

    void Rectangle::set_height(double height){ this->height = height; }

    void Rectangle::set_width(double width){ this->width = width; }

    void Rectangle::set_color(std::string color){color = color;}
}