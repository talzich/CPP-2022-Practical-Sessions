/**
 * @file person.hpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file defines the person class - a base class for our demonstration of inheritance and virtual fucns
 * @date 2022-04-02
 * 
 */
#pragma once

#include <string>

namespace zich{
    class Person{

        protected:
            std::string f_name;
            std::string l_name;
        public:
            Person(std::string f_name, std::string l_name);
            void print_info();
            std::string get_name() const;
    };
}