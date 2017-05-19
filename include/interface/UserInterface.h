#pragma once
#include "LoginController.h"
#include <memory>

class User;

class UserInterface
{
public:
    void login();
    void logout();
    void info() const;
    void registration() const;
private:
    std::shared_ptr<User> user;
    LoginController login_controller;
};