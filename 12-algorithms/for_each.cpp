#include <vector>
#include <algorithm>
#include <iostream>

int main()
{
    std::vector<int> nums{3, 4, 2, 8, 15, 267};

    auto print = [](const int &n) { std::cout << " " << n; }; // lambda

    std::cout << "before:";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';

    // Exercise: Write your own for each loop to increment ll the elements in nums
    
    
    std::cout << "after: ";
    std::for_each(nums.begin(), nums.end(), print);
    std::cout << '\n';
}