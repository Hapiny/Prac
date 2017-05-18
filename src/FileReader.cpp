#include "FileReader.h"
#include "Splitter.h"
#include "User.h"

FileReader::FileReader(std::string filename) 
    : filename(filename)  {}

std::vector<std::shared_ptr<User>> FileReader::users() const 
{
    std::vector<std::shared_ptr<User>> res;
    std::ifstream infile(filename);
    Splitter splitter(',');
    std::string line;

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
            continue ;
        }
    }

    return res;
}