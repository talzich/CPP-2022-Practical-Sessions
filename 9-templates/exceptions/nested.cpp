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
#include <string>

void f()
{
    try
    {
        throw "Error";
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
        try{

        throw i+1;
        }catch(...)
        {
            std::cerr << "default" << '\n'; 
        }
    }
    catch (const char *s)
    {
        std::cout << "Caught " << s << " in main()\n";
    }
    catch(...)
    {
        std::cerr << "default" << '\n';
    }
    return 0;
}