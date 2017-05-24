#pragma once
#include <memory>
#include <string>
#include <vector>

class User;
class FileReader;

class LoginController 
{
public:
    LoginController(std::string filemane = "users/users.txt");
    std::shared_ptr<User> get_user(std::string, std::string) const;
    int get_last_id() const;
    std::vector<std::string> get_types() const;
private:
    std::shared_ptr<FileReader> reader;
};