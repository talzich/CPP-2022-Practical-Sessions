/**
 * @file vector2.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief Demonstraiting operator overloading
 * @date 2022-03-19
 * 
 */
#include <iostream>
#include <map>
#include <string>
#include <vector>
const int ALPHA = 2;

/**
 * @brief A 2 elements vector class
 * We will write scalar multiplication and vector add using this class
 */
class Vector2{
    public:
        double x, y;
        Vector2(double x, double y) : x(x), y(y){}

        Vector2 &operator*(double scalar) const{
            Vector2 *v = new Vector2(x*scalar, y*scalar);
            return *v;
        }


        Vector2 operator+(const Vector2 &v) const{
            return Vector2(x + v.x, y + v.y);
        }

        double &operator[](int index){
            if(index == 0) return x;
            if(index == 1) return y;
            throw "Index out of bounds. Vector 2D";
        }
        
};

int main(){
    Vector2 v1{1, 0}; // -> heap
    Vector2 v2{0, 1}; // -> stack

    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // old way
    v1.x *= ALPHA;
    v1.y *= ALPHA;
    v2.x *= ALPHA;
    v2.y *= ALPHA;

    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // // operator overloading

    v1*ALPHA;
    v2*ALPHA;


    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // // better overloading

    v1 = v1*ALPHA; // v1 *= ALPHA
    v2 = v2*ALPHA;

    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
    std::cout << "v2 = (" << v2.x << ", " << v2.y << ')' << std::endl;

    // your turn
    Vector2 v3 = v1 + v2;
    std::cout << "v3 = (" << v3.x << ", " << v3.y << ')' << std::endl;

    // // brackets
    try{
        std::cout << "v1[0] = " << v1[0] << std::endl;
        std::cout << "v1[1] = " << v1[1] << std::endl;
        std::cout << "v1[2] = " << v1[2] << std::endl;
    }
    catch(const char* error){
        std::cout << "Error: " << error << std::endl;
    }
    v1[1] = 5;
    std::cout << "v1 = (" << v1.x << ", " << v1.y << ')' << std::endl;
}