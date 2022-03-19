/**
 * @file vector2.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief Demonstraiting operator overloading
 * @date 2022-03-19
 * 
 */
#include <iostream>

const int ALPHA = 2;

class Vector2{

    public:
        double x, y;
        Vector2(double x, double y) : x(x), y(y) {}
};

int main(){
    Vector2 v1{1, 0};
    Vector2 v2{0, 1};
    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // old way
    v1.x *= ALPHA;
    v1.y *= ALPHA;
    v2.x *= ALPHA;
    v2.y *= ALPHA;

    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // operator overloading

    // v1*ALPHA;
    // v2*ALPHA;

    // std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    // std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // better overloading

    // v1 = v1*ALPHA;
    // v2 = v2*ALPHA;

    // std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    // std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // your turn
    // Vector2 v3 = v1 + v2;
    // std::cout << "v3 = (" << v3.x << ", " << v3.y << ')' << std::endl;
}