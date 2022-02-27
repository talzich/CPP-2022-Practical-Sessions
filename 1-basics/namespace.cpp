#include <iostream>

namespace a
{
    void foo(){
        std::cout << 'a' << std::endl;
    }
}

namespace b
{
    void foo()
    {
        std::cout << 'b' << std::endl;
    }

    void bar(){

    }
}

using namespace a;
using namespace b;

int main(){
    // Create two different namespaces and in each one write a function to print the name
    // of the namespace. Name BOTH functions 'foo'

    // Try to call the functions:
    // 1. Without 'using' statements
    // 2. With a single 'using' statement
    // 3. With two 'using' statements
    // Write down comments on what happened each time. What did you understand?
    
    // Play with it!

    foo();

    return 0;
}