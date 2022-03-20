/**
 * @file vector2.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief Demonstraiting operator overloading
 * @date 2022-03-19
 */

#include <iostream>
#include <string>

std::string operator*(int n, std::string s)
{
    std::string result = "";
    for (int i = 0; i < n; ++i)
        result += s;
    return result;
}


std::string operator*(std::string s, int n)
{
    std::string result = "";
    for (int i = 0; i < n; ++i)
        result += s;
    return result;
}


int main(){
    int x = 3;
    std::string str = "Hello";
    std::cout << x*str << std::endl; 
}
