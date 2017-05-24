#pragma once
#include <iostream>
/* FOREGROUND */
/* SIMPLE TEXT COLORS */
#define RST   "\x1B[0m" //default color
#define BLK  "\x1B[30m"//black
#define RED  "\x1B[31m"//red
#define GRN  "\x1B[32m"//green
#define YEL  "\x1B[33m"//yellow
#define BLU  "\x1B[34m"//blue
#define MAG  "\x1B[35m"//magenta
#define CYN  "\x1B[36m"//cyan
#define WHT  "\x1B[37m"//white

#define FRED(x) RED x RST
#define FGRN(x) GRN x RST
#define FYEL(x) YEL x RST
#define FBLU(x) BLU x RST
#define FMAG(x) MAG x RST
#define FCYN(x) CYN x RST
#define FWHT(x) WHT x RST
/* TEXT STYLES*/
#define SBOLD   "\x1B[1m"
#define SITAL   "\x1B[3m"
#define BOLD(x) "\x1B[1m" x RST//bold
#define ITAL(x) "\x1B[3m" x RST//italics
#define UNDL(x) "\x1B[4m" x RST//underlined

void main_menu() 
{
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀ ")) << BOLD(FCYN("MENU")) << BOLD(FYEL(" ▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;  
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FRED("➊ ")) << ITAL(UNDL("Help.")) << std::endl;
    std::cout << BOLD(FYEL("➋ ")) << ITAL(UNDL("Log in to the system.")) << std::endl; 
    std::cout << BOLD(FGRN("➌ ")) << ITAL(UNDL("Registration.")) << std::endl;
    std::cout << BOLD(FMAG("➍ ")) << ITAL(UNDL("Clear screen.")) << std::endl;
    std::cout << BOLD(FCYN("➎ ")) << ITAL(UNDL("Exit")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
}

void user_menu()
{
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀ ")) << BOLD(FCYN("MENU")) << BOLD(FYEL(" ▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;  
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FGRN("➊ ")) << ITAL(UNDL("Logout.")) << std::endl;
    std::cout << BOLD(FGRN("➋ ")) << ITAL(UNDL("Info about user.")) << std::endl;
    std::cout << BOLD(FGRN("➌ ")) << ITAL(UNDL("Show available document types.")) << std::endl;
    std::cout << BOLD(FGRN("➍ ")) << ITAL(UNDL("Clear screen.")) << std::endl;
    std::cout << BOLD(FGRN("➎ ")) << ITAL(UNDL("Help.")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
}
//➊➋➌➍➎➏➐➑

void admin_menu()
{
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀ ")) << BOLD(FCYN("MENU")) << BOLD(FYEL(" ▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;  
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FGRN("➊ ")) << ITAL(UNDL("Add new document type.")) << std::endl;
    std::cout << BOLD(FGRN("➋ ")) << ITAL(UNDL("Clear screen.")) << std::endl;
    std::cout << BOLD(FGRN("➌ ")) << ITAL(UNDL("Help.")) << std::endl;
    std::cout << BOLD(FGRN("➍ ")) << ITAL(UNDL("Exit.")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
    std::cout << BOLD(FYEL("▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄▀▄")) << std::endl;
}