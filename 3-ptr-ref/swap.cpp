#include <iostream>

void swap(int *a, int *b){
    int tmp = *a;
    *a = *b;
    *b = tmp;
}

void swap(int &a, int &b){
    int tmp = a;
    a = b;
    b = tmp;
}

int main(){
    int a = 1, b = 2;
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(&a, &b);
    std::cout << "a = " << a << " b = " << b << std::endl;
    swap(a, b);
    std::cout << "a = " << a << " b = " << b << std::endl;
}