/**
 * @file student.hpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file defines the student class - a derived class derived from person
 * @date 2022-04-02
 */
#pragma once

#include "person.hpp"

namespace zich{
    class Student : public Person{
        private:
            unsigned short GPA;
        public:
            Student(std::string f_name, std::string l_name, unsigned short GPA);
            void print_info();
            std::string get_name() const;
    };
}