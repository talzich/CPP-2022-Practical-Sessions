#include "person.hpp"
#include "student.hpp"

#include <iostream>

void print_name(const zich::Person &p){
    std::cout << p.get_name() << std::endl;
}

int main(){
    using namespace zich;

    Person zich{"Tal", "Zichlinsky"};
    zich.print_info();

    Student moshe{"Moshe", "Levi", 82};
    moshe.print_info();

    // print_name(zich);
    // print_name(moshe);
    return 0;
}