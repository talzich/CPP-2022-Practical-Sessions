#include <vector>
#include <algorithm>
#include <iostream>

int main() {
    const std::vector v{1, 2, 3, 4, 4, 3, 7, 8, 9, 10};

    for (const int target : {3, 4, 5})
    {
        // counts number of elements equal to target
        const int num_items = std::count(v.cbegin(), v.cend(), target);
        std::cout << "number: " << target << ", count: " << num_items << '\n';
    }

    // count_if acts exactly the same, but it gets element a boolean function as the
    // third and counts the element if the boolean function returns true

    // Exercise: Write a count_if function to determine how many
    // elements in v are divisible by 4.

}