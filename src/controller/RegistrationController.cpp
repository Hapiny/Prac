#include "RegistrationController.h"
#include "User.h"
#include "FileWriter.h"
#include <unistd.h>
#include <iostream>
#include <sys/wait.h>

RegistrationController::RegistrationController() 
    : writer(std::shared_ptr<FileWriter>(new FileWriter("users/users.txt"))) {}

int RegistrationController::add_user(std::string name, std::string nick, std::string pass, std::string id) const
{
    try
    {
        if (name[0] <= '9' && name[0] >= '0') throw std::invalid_argument("Bad name of user!");
        if (nick[0] <= '9' && nick[0] >= '0') throw std::invalid_argument("Bad nickmane of user!");
        writer->add_line(name);
        writer->add_line(",");
        writer->add_line(nick);
        writer->add_line(",");
        writer->add_line(pass);
        writer->add_line(",");
        writer->add_line(id);
        writer->add_line("\n");
        std::string way = "users/";
        way += nick;
        const char *str = way.c_str();
        if (!fork())
        {
            execlp("mkdir","mkdir", str, NULL);
        }
        wait(NULL);
        return 1;
    }
    catch(std::invalid_argument & ia)
    {
        std::cerr << "Error: wrong input!\n" << ia.what() << std::endl; 
        return 0;
    }
}
