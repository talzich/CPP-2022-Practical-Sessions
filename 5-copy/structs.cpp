/**
 * @file structs.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file demonstrates copying on structs variables
 * @date 2022-03-26
 */
#include <iostream>

struct Vector2{
    int x, y;
};

int main()
{

    Vector2 v1{3, 5};
    Vector2 v2 = v1;

    int a = v1.x;
    int b = v2.x;

    std::cout << "&v1 = " << &v1 << '\n';
    std::cout << "&v2 = " << &v2 << '\n';

    std::cout << "a = " << a << " &a = " << &a << '\n';
    std::cout << "b = " << b << " &b = " << &b << std::endl;
    return 0;
}