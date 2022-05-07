/**
 * @file m_example.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief   This file aims to demonstrate the use of iterators on a more complex data structure, such as a map
 * @version 1.0
 * @date 2022-05-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <iostream>
#include <unordered_map>
#include <string>

int main(){
    std::unordered_map<std::string, int> m;
    m["Hello"] = 1;
    m["Class"] = 5;
    m["Hi"] = 100;
    m["Zich"] = 2;
}
