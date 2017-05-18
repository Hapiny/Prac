#include "UserInterface.h"
#include "Color.h"
#include <iostream>
#include <string>

void help() 
{
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀ ")) << BOLD(FCYN("MENU")) << BOLD(FYEL(" ▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;  
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FGRN("➊ ")) << ITAL(UNDL("Help.")) << std::endl;
    std::cout << BOLD(FGRN("➋ ")) << ITAL(UNDL("Log in to the system.")) << std::endl; 
    std::cout << BOLD(FGRN("➌ ")) << ITAL(UNDL("Logout.")) << std::endl;
    std::cout << BOLD(FGRN("➍ ")) << ITAL(UNDL("Info about user.")) << std::endl;
    std::cout << BOLD(FGRN("➎ ")) << ITAL(UNDL("Exit.")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
}


int main() 
{
	UserInterface ui;
	system("clear");
    help();
    while(1) {
        std::cout << std::endl << BOLD(ITAL(FGRN("Choose option:"))) << std::endl;
        std::cout << BOLD(FGRN("➤ "));
        std::string str;
        std::getline(std::cin, str);
        if (str == "login" || str == "2") 
        {
            ui.login();
        } 
        else if (str == "logout" || str == "3") 
        {
            ui.logout();
        } 
        else if (str == "info" || str == "4") 
        {
            ui.info();
        } 
        else if (str == "help" || str == "1") 
        {
            help();
        } 
        else if (str == "exit" || str == "5") 
        {
        	std::cout << ITAL(BOLD(FGRN("☻  Have a nice day ☻ "))) << std::endl;
            return 0;
        } 
        else {
            std::cout << "Unknown command!" << std::endl;
        }
    }
}