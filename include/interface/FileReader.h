#pragma once
#include <memory>
#include <string>
#include <vector>

class User;

class FileReader 
{
public:
    FileReader(std::string filename);
    std::vector<std::shared_ptr<User>> users();
    int get_last_id();
    void set_err(int);
    int get_err() const;
private:
    std::string filename;
    int num_err;
};