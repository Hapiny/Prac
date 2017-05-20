#include "RegistrationController.h"
#include "User.h"
#include "FileWriter.h"
#include <unistd.h>
#include <sys/wait.h>

RegistrationController::RegistrationController() 
    : writer(std::shared_ptr<FileWriter>(new FileWriter("users/users.txt"))) {}

std::shared_ptr<User> RegistrationController::add_user(std::string name, std::string nick, std::string pass, std::string id) const
{
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
    return std::shared_ptr<User>(new User(name,nick,pass,std::stoi(id)));
}
