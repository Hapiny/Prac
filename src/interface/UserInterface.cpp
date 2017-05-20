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

void UserInterface::registration()
{
    std::cout << "Create a nickname: ";
    std::string login;
    std::getline(std::cin, login);
    std::cout << "Create a password: ";
    std::string pass;
    std::getline(std::cin, pass);
    if (login_controller.get_user(login, pass) != nullptr)
    {
        std::cout << "This user already exists!" << std::endl;
    }
    else 
    {
        std::cout << "What is your name, our new user?" << std::endl;
        std::string name;
        std::getline(std::cin, name);
        std::string id = std::to_string(login_controller.get_last_id()+1);
        std::shared_ptr<User> user = reg_controller.add_user(name,login,pass,id);
        if (user != nullptr)
        {
            this->user = user;
            std::cout << "You are successfully registered and logged in!" << std::endl;
        }
        else
        {
            std::cout << "Registration failed!" << std::endl;
        }
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