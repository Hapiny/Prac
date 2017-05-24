#include "LoginController.h"
#include "User.h"
#include "FileReader.h"
#include <iostream>

LoginController::LoginController(std::string filename) : reader(std::shared_ptr<FileReader>(new FileReader(filename))) {}

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

std::vector<std::string> LoginController::get_types() const
{
    LoginController login_controller("doc_types.txt");
    return reader->doc_types();

}

int LoginController::get_last_id() const
{
    std::vector<std::shared_ptr<User>> users = reader->users();
    int tmp = users.size()-1;
    return users[tmp]->get_id();
}