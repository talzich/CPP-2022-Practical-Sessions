/**
 * @file classes.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file demonstrates copying on structs variables
 * @date 2022-03-26
 */
#include <iostream>
#include <string>

int main(){

    String first = "one";
    String second = "two";
    std::cout << first << '\n';
    std::cout << second << '\n';

    second[1] = 'o';
    std::cout << first << '\n';
    std::cout << second << '\n';

    second = first;
    std::cout << first << '\n';
    std::cout << second << std::endl;

    second[1] = 'o';
    std::cout << first << '\n';
    std::cout << second << '\n';
    return 0;
}
