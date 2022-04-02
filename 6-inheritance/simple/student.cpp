/**
 * @file person.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file implements the student class, defined in student.hpp
 * @date 2022-04-02
 *
 */
#include "student.hpp"

#include <iostream>
namespace zich{
    Student::Student(std::string f_name, std::string l_name, unsigned short GPA) : Person(f_name, l_name), GPA(GPA) {}
    
    void Student::print_info()
    {
        Person::print_info();
        std::cout << "GPA: " << GPA << std::endl;
    }

    std::string Student::get_name() const { return "Student::Name: " + f_name; }
}