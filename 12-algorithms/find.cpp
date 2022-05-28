#include <iostream>
#include <algorithm>
#include <vector>
#include <iterator>

int main()
{
    std::vector<int> v{1, 2, 3, 4};
    int n1 = 3;
    int n2 = 5;

    auto result1 = std::find(begin(v), end(v), n1);
    auto result2 = std::find(begin(v), end(v), n2);

    (result1 != std::end(v))
        ? std::cout << "v contains " << n1 << '\n'
        : std::cout << "v does not contain " << n1 << '\n';

    // find_if acts exactly the same, but it gets element a boolean function as the
    // third and counts the element if the boolean function returns true

    // Exercise: write a piece of code to determine wether v contains an even number.
    // if it does, print it, if it doesn't, print something else.

    
}