/**
 * @file v_example.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief   This file aims to demonstrate the use of iterators in range based for loops, as opposed to simple for loops
 *          on a simple iterable, such as a vector.
 * @version 1.0
 * @date 2022-05-07
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>
#include <vector>

int main(){
    
    // A vector is an iterable
    std::vector<int> v = {0, 1, 2, 3, 4};

    std::cout << "Simple for loop" << '\n';
    for (int i = 0; i < v.size(); ++i)
    {
        std::cout << v[i] << '\n';
    }
    std::cout << std::endl;
}