/**
 * @file nested.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief 
 * @version 1.0
 * @date 2022-04-30
 * 
 * @copyright Copyright (c) 2022
 * 
 */

#include <iostream>

void f()
{
    try
    {
        throw "String";
    }
    catch (const char *s)
    {
        std::cout << "Caught " << s << " in f()\n";
    }
}
void g()
{
    int i = 1;
    try
    {
        throw i;
    }
    catch (const char *s)
    {
        std::cout << "Caught " << s << " in g()\n";
    }
}
int main()
{
    try
    {
        f();
        g();
    }
    catch (int i)
    {
        std::cout << "Integer:" << i << " caught by main()\n";
    }
    catch (const char *s)
    {
        std::cout << "Caught " << s << " in main()\n";
    }
    return 0;
}