#pragma once
#include <memory>
#include <string>

class User;
class FileReader;

class LoginController 
{
public:
    LoginController();
    std::shared_ptr<User> get_user(std::string, std::string) const;
    int get_last_id() const;
private:
    std::shared_ptr<FileReader> reader;
};