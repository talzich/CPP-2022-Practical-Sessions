#include <iostream>
#include <string>


class User{
    std::string user_name;
public:
    User(std::string user_name) : user_name(user_name){}
    std::string get_name(){ return user_name; }
    friend void set_user_name(User &user ,std::string user_name);
};

void set_user_name(User &user, std::string user_name)
{
    user.user_name = user_name;
}

int main(){
    User u{"moses"};
    std::cout << u.get_name() << std::endl;
    set_user_name(u, "aharon");
    std::cout << u.get_name() << std::endl;
}