/*
    Suppose we work at a company and we use a certain piece of code someone
    wrote a long time ago. Suppose we want to use a value that is being passed to us
    as const but we need to change its value. 

    Why would we do that? 
    Sometimes we write code and are not aware of the uses it will have in several years.
    Sometimes we don't have access to that old code and can't update it to be more
    fitting for current use. 

    That's why we have const cast
*/
#include <iostream>

int main()
{
    int x = 1;
    const int *y = &x;
    std::cout << "Old y = " << *y << '\n';
    int *z = const_cast<int *>(y);
    *z = 51;
    std::cout << "New y = " << *y << std::endl;
    std::cout << "x = " << x << std::endl;
}