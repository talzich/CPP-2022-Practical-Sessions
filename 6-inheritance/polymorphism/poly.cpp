#include <iostream>
#include <string>

class Person
{
    protected:
        std::string f_name;
        std::string l_name;

    public:
        Person(std::string f_name, std::string l_name) : f_name(f_name), l_name(l_name) {}

        void print_info() { std::cout << "First name: " << f_name << '\n'
                                      << "Last name: " << l_name << std::endl; }

        virtual std::string get_name() const { return "Person::Name: " + f_name; }
};

class Student : public Person
{
    private:
        unsigned short GPA;

    public:
        Student(std::string f_name, std::string l_name, unsigned short GPA) : Person(f_name, l_name), GPA(GPA) {}

        void print_info()
        {
            Person::print_info();
            std::cout << "GPA: " << GPA << std::endl;
        }

        std::string get_name() const { return "Student::Name: " + f_name; }
};

void print_name(const Person &p)
{
    std::cout << p.get_name() << std::endl;
}

int main()
{
    Person zich{"Tal", "Zichlinsky"};
    zich.print_info();

    Student moshe{"Moshe", "Levi", 82};
    moshe.print_info();

    print_name(zich);
    print_name(moshe);
    return 0;
}