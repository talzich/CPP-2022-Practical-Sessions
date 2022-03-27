/**
 * @file primitive.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file demonstrates copying on primitive variables
 * @date 2022-03-26 
 */
#include <iostream>

// When does copying occurs?
// 1. When constructing a new object with an existing object
// 2. Returning by value
// 3. Hint: Functions (I've talked about this one multiple times in class)

// 4. Assigning existing var to existing var (This one is special)

int main(){

    int a =  3;
    int b = a;
    std::cout << "a = " << a << " &a = " << &a << '\n';
    std::cout << "b = " << b << " &b = " << &b << '\n';
    b = 5;
    std::cout << "a = " << a << " &a = " << &a << '\n';
    std::cout << "b = " << b << " &b = " << &b << std::endl;
    return 0;
}