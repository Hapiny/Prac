#include "UserInterface.h"
#include "User.h"
#include <iostream>
#include <string>

void UserInterface::logout() 
{
    user = nullptr;
    std::cout << "Logout: OK" << std::endl;
}


void UserInterface::login() 
{
    std::cout << "Enter nickname: ";
    std::string login;
    std::getline(std::cin, login);
    std::cout << "Enter password: ";
    std::string pass;
    std::getline(std::cin, pass);
    std::shared_ptr<User> user = login_controller.get_user(login, pass);
    if (user != nullptr) 
    {
        this->user = user;
        std::cout << "Login success!" << std::endl;
    } 
    else 
    {
        std::cout << "Login failed!" <<  std::endl;
    }
}

void UserInterface::info() const
{
    if (user != nullptr) 
    {
        std::cout << "User name: " << user->get_name() << std::endl;
        std::cout << "User nickname: " << user->get_nickname() << std::endl;
        std::cout << "User password: " << user->get_password() << std::endl;
        std::cout << "User id: " << user->get_id() << std::endl;
    }
    else 
    {
        std::cout << "You aren`t logged in!" << std::endl; 
    }
}