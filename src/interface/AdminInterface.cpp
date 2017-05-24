#include "AdminInterface.h"
#include <iostream>

void AdminInterface::add_document() const
{
    std::string str;
    std::cout << "Вводите имя типа документа:" << std::endl;
    std::getline(std::cin, str);
    file_ctrl.add_atribute(str);
    do
    {    
        std::cout << "Вводите имя атрибута:" << std::endl;
        std::cout << "➤ ";
        std::getline(std::cin,str);
        if (str != "stop") file_ctrl.add_atribute(str);
    }  
    while(str != "stop");
    file_ctrl.add_atribute("\n");  
}