#include "FileReader.h"
#include "Splitter.h"
#include "User.h"
#include <iostream>
#include <string>
#include <fstream>

FileReader::FileReader(std::string filename) 
    : filename(filename), num_err(0)  {}

std::vector<std::string> FileReader::doc_types() const
{
    std::vector<std::string> res;
    std::ifstream infile("doc_types.txt");
    Splitter splitter(' ');
    std::string line;
    while (std::getline(infile, line)) 
    {
        std::vector<std::string> splitted = splitter.split(line);
        if(splitted.size()) res.push_back(splitted[0]);
    }
    return res;
}

std::vector<std::shared_ptr<User>> FileReader::users() 
{
    std::vector<std::shared_ptr<User>> res;
    std::ifstream infile(filename);
    Splitter splitter(',');
    std::string line;
    int tmp = 0;
    while (std::getline(infile, line)) 
    {
        std::vector<std::string> splitted = splitter.split(line);
        try 
        {
            if (splitted.size() < 4) throw std::invalid_argument("");
            std::string name = splitted[0];
            std::string nickname = splitted[1];
            std::string password = splitted[2];
            int id = std::stoi(splitted[3]);
            res.push_back(std::shared_ptr<User>(new User(name, nickname, password, id)));
        } 
        catch (std::invalid_argument) 
        {
            std::cerr << "WARNING: User reading error!" << std::endl;
            tmp++;
            continue ;
        }
    }
    this->set_err(tmp);
    return res;
}

void FileReader::set_err(int t)
{
    num_err = t;
}

int FileReader::get_err() const 
{
    return num_err;
}