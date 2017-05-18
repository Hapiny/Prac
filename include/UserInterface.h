#include <memory>
#include "LoginController.h"


class User;

class UserInterface
{
public:
    void login();
    void logout();
private:
    std::shared_ptr<User> user;
    LoginController login_controller;
};