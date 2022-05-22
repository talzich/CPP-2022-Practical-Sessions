#include <iostream>
#include <iomanip>

// Usually a bas idea. One of the uses is to access a piece of memory where we are
// 100% sure we know what happens there and want to treat it as binary. 
// Very not recommended
int main()
{
    int i = 5;

    int *ip =&i;
    double *dp = (double*)ip;
    double *ep = reinterpret_cast<double*>(ip);

    std::cout << "i as a double: " << std::setprecision(100) << *dp << " " << *ep << std::endl;

    double d = 5.555;
    int &ir = (int &)d;
    int &jr = reinterpret_cast<int &>(d);
    std::cout << "d interpreted as an int: " << ir << " " << jr << std::endl;
    std::cout << "---" << std::endl;

    return 0;
}