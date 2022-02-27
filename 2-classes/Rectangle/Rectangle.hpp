// Write a header file to define the class Rectangle
// A rectangle has height, width, color, getters, setters and constructors

// Suppose all rectangles share the same color. How would you implement that?
#include <string>

namespace zich
{
    class Rectangle
    {
    private:
        double height, width;
        static std::string color;

    public:
        Rectangle(double height, double width);
        ~Rectangle();

        double get_height();
        double get_width();

        void set_height(double height);
        void set_width(double width);

        static void set_color(std::string color);
    };
}