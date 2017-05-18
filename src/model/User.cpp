#include "User.h"

User::User(std::string name, std::string nickname, std::string password, int id)
    : name(name), nickname(nickname), password(password), id(id) {}

std::string User::get_name() const 
{
    return name;
}

std::string User::get_nickname() const 
{
    return nickname;
}

std::string User::get_password() const 
{
    return password;
}

int User::get_id() const 
{
    return id;
}