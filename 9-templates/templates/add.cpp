/**
 * @file add.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file aims to demonstarate the use and compilation attributes of templates
 * @version 1.0
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 */
#include <iostream>
#include <string>

// In lesson 2 (classes) we showed function overloading using multiple functions with different arg types
// Today we will write ZERO(!) functions to get the same result

template<typename T>
void add(T a, T b)
{
    T c = a + b;
    std::cout << c << std::endl;
}

int main()
{
    add(3, 1);
    add(3.1, 1.5);
    add<int>(3, 1.5);
    return 0;
}