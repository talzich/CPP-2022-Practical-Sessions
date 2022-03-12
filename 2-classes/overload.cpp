#include <iostream>
#include <string>

void add(int a, int b){
    int c = a+b;
    std::cout << c << std::endl;
}

void add(double a, double b)
{
    double c = a + b;
    std::cout << c << std::endl;
}

void add(std::string a, std::string b)
{
    std::string c = a + b;
    std::cout << c << std::endl;
}


int main(){
    // write a function named 'add' that sums two integers and prints
    // write a method named 'add' that sums two real numbers and prints
    // write a function, also named 'add' that concatenates two strings and prints

    // 1. Call 'add' with two integers
    // 2. Call 'add' with two strings
    // 3. Call 'add' with two doubles
    // 4. try one of each


    // Explain, in your own words in a comment, what do you think the difference is
    // between 'ambiguous' and 'no matching function'

    add(5, 3);
    add(5.0, 3.0);
    add(5, (int)3.0);
    add(5, "hello");

    return 0;
}