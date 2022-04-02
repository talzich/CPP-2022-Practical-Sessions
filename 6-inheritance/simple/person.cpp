/**
 * @file person.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file implements the person class, defined in person.hpp
 * @date 2022-04-02
 *
 */
#include "person.hpp"

#include <iostream>

namespace zich
{
    Person::Person(std::string f_name, std::string l_name) : f_name(f_name), l_name(l_name) {}

    void Person::print_info(){ std::cout << "First name: " << f_name << '\n' << "Last name: " << l_name << std::endl; }
    
    std::string Person::get_name() const { return "Person::Name: " + f_name; }
};