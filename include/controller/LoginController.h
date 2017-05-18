#pragma once
#include <memory>
#include <string>

class User;
class FileReader;

class LoginController 
{
public:
    LoginController();
    std::shared_ptr<User> get_user(std::string, std::string);
private:
    std::shared_ptr<FileReader> reader;
};