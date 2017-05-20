#include "LoginController.h"
#include "User.h"
#include "FileReader.h"
#include <iostream>

LoginController::LoginController() : reader(std::shared_ptr<FileReader>(new FileReader("users/users.txt"))) {}

std::shared_ptr<User> LoginController::get_user(std::string login, std::string password) const
{
    std::vector<std::shared_ptr<User>> users = reader->users();
    for (std::shared_ptr<User> user : users) 
    {
        if (user->get_nickname() == login && user->get_password() == password) 
        {
            return user;	
        }
    }
    return nullptr;
}

int LoginController::get_last_id() const
{
    std::vector<std::shared_ptr<User>> users = reader->users();
    int tmp = users.size()-1;
    return users[tmp]->get_id();
}