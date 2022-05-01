/**
 * @file array.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file aims to demonstrate the multiple uses for templates
 * @version 1.0
 * @date 2022-04-30
 *
 * @copyright Copyright (c) 2022
 *
 */
#include <iostream>
#include <vector>

template<int SIZE, typename T>
class Stack
{
    private:
        int _size;
        T arr[SIZE];
    public:
        Stack(): _size(0) {}
        
        bool push(const T &item)
        {
            if(this->isFull())
            {
                std::cerr << "Max stack size reached!" << '\n';
                return false;
            }
            arr[_size++] = item;
            return true;
        }

        T pop()
        {
            if(this->isEmpty())
            {
                throw "Stack is empty!";
            }
            return arr[--_size];
        }

        bool isFull() { return _size == SIZE; }
        bool isEmpty() { return _size == 0; }
        
};
int main()
{
    std::cout << std::boolalpha; // writes true or false to stdout instead of 1 or 0
    
    Stack<5, float> s;
    try
    {
        for(int i = 0; i < 6; ++i)
        {
            std::cout << s.push(i) << std::endl;
        }
        for (int i = 0; i < 6; ++i)
        {
            std::cout << s.pop() << std::endl;
        }
    }catch(const char* s)
    {
        std::cerr << s << '\n';
    }
    return 0;
}