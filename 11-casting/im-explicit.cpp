/**
 * @file im-explicit.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file aims to highlight and demonstrate the difference between implicit
 *        and explicit casting.
 * @version 1.0
 * @date 2022-05-21
 * 
 * @copyright Copyright (c) 2022
 * 
 */
#include <iostream>

int main()
{
    // implicit int to double and vice versa
    int x = 5; 
    double y = x;
    // explicit c-style int to double and vice versa
    y = (double)x;
    
    // explicit cpp-style cast (simple static cast)
    double z = static_cast<double>(x);

    return 0;
}