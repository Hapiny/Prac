#pragma once
#include "LoginController.h"
#include "RegistrationController.h"
#include <memory>

class User;

class UserInterface
{
public:
    void login();
    void logout();
    void info() const;
    void registration();
    void show_docs() const;
private:
    std::shared_ptr<User> user;
    LoginController login_controller;
    RegistrationController reg_controller;
};