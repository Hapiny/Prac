#include "Menu.h"
#include "Color.h"

void Menu::user_mode() const
{
    UserInterface ui;
    system("clear");
    main_menu();
    while(1) {
        std::cout << std::endl << BOLD(ITAL(FGRN("Choose option:"))) << std::endl;
        std::cout << BOLD(FGRN("➤ "));
        std::string str;
        std::getline(std::cin, str);
        if (str == "login" || str == "2") 
        {
            ui.login();
            sleep(1);
            system("clear");
            user_menu();
            while(1) {
                std::cout << std::endl << BOLD(ITAL(FGRN("Choose option:"))) << std::endl;
                std::cout << BOLD(FGRN("➤ "));
                std::string str;
                std::getline(std::cin, str);
                if (str == "logout" || str == "1") 
                {
                    ui.logout();
                    break;
                }
                else if (str == "info" || str == "2") 
                {
                    ui.info();
                }
                else if (str == "show" || str == "3")
                {
                    ui.show_docs();
                }    
                else if (str == "clear" || str == "4")
                {
                    system("clear");
                    user_menu();
                }
                else if (str == "help" || str == "5")
                {
                    user_menu();
                }
                else 
                {
                    std::cout << "Unknown command!" << std::endl;
                }    
            }
        } 
        else if (str == "clear" || str == "4") 
        {
            system("clear");
            main_menu();
        }
        else if (str == "reg" || str == "3")
        {
            ui.registration();
        } 
        else if (str == "help" || str == "1") 
        {
            main_menu();
        } 
        else if (str == "exit" || str == "5") 
        {
            std::cout << ITAL(BOLD(FGRN("☻  Have a nice day ☻ "))) << std::endl;
            return;
        } 
        else 
        {
            std::cout << "Unknown command!" << std::endl;
        }
    }
}

void Menu::admin_mode() const
{
    AdminInterface ai;
    system("clear");
    admin_menu();
    while(1)
    {
        std::cout << std::endl << BOLD(ITAL(FGRN("Choose option:"))) << std::endl;
        std::cout << BOLD(FGRN("➤ "));
        std::string str;
        std::getline(std::cin, str);
        if (str == "1" || str == "add")
        {
            ai.add_document();
        }
        else if (str == "2" || str == "clear")
        {
            system("clear");
            admin_menu();
        }
        else if (str == "3" || str == "help")
        {
            admin_menu();
        }
        else if (str == "4" || str == "exit")
        {
            std::cout << ITAL(BOLD(FGRN("☻  Have a nice day ☻ "))) << std::endl;
            return;
        } 
        else 
        {
            std::cout << "Unknown command!" << std::endl;
        }  
    }
}