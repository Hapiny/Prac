#pragma once
#include <string>

class User 
{
public:
    User(std::string name, std::string nickname, std::string password, int id);
    std::string get_name() const;
    std::string get_nickname() const;
    std::string get_password() const;
    int get_id() const;
private:
    std::string name;
    std::string nickname;
    std::string password;
    int id;
};