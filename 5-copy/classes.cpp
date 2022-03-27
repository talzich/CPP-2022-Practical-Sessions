/**
 * @file classes.cpp
 * @author Tal Zichlinsky (tal.zichlinsky@gmail.com)
 * @brief This file demonstrates copying on structs variables
 * @date 2022-03-26
 */
#include <iostream>
#include <string>

using std::ostream;

// Let's build a String class that supports all follwing actions
class String{

    private:
        char *buffer;
        unsigned int size;
    public:
        // ctor
        String(const char* string){
            size = std::strlen(string);
            buffer = new char[size + 1];
            memcpy(buffer, string, size);
            buffer[size] = 0; // = '\0'
        }
        // copy ctor
        String(const String& other){
            size = other.size;
            buffer = new char[size+1];
            memcpy(buffer, other.buffer, size+1);
        }
        // dtor
        ~String(){
            delete[] buffer;
        }

        char& operator[](const unsigned int& index){
            return buffer[index];
        }

        void operator=(const String& other){
            size = other.size;
            delete[] buffer;
            buffer = new char[size+1];
            memcpy(buffer, other.buffer, size+1);
        }
        
        friend ostream& operator<<(ostream& out, const String& string);
};

ostream& operator<<(ostream& out, const String& string){
    out << string.buffer;
    return out;
}

int main(){

    String first = "one";
    String second = "two";
    std::cout << first << '\n';
    std::cout << second << '\n';

    second[1] = 'o';
    std::cout << first << '\n';
    std::cout << second << '\n';

    second = first;
    std::cout << first << '\n';
    std::cout << second << std::endl;
    return 0;
}
