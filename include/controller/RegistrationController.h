#pragma once
#include <memory>
#include <string>

class FileWriter;
class User;

class RegistrationController
{
public:
    RegistrationController();
    int add_user(std::string, std::string, std::string, std::string) const;
private:
    std::shared_ptr<FileWriter> writer;
};