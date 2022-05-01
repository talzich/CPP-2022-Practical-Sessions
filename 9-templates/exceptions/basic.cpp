/**
 * @file basic.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file aims to demonstrate the use of the exception library
 * @version 1.0
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <exception>
#include <string>

int main()
{
    try
    {
        throw "Error message";
    }
    catch(const std::string s)
    {
        std::cerr << s << '\n';
    }
    catch(...)
    {
        std::cerr << "default" << '\n';
    }
    
}