#pragma once
#include <memory>
#include "LoginController.h"


class UserInterface
{
public:
    void login();
    void logout();
    void info() const;
private:
    std::shared_ptr<User> user;
    LoginController login_controller;
};