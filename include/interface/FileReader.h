#pragma once
#include <memory>
#include <string>
#include <vector>

class User;

class FileReader 
{
public:
    FileReader(std::string filename);
    std::vector<std::shared_ptr<User>> users() const;
private:
    std::string filename;
};