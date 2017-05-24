#pragma once
#include "UserInterface.h"
#include "AdminInterface.h"
#include <string>
#include <unistd.h>

class Menu
{
public:
	void user_mode() const;
	void admin_mode() const;
};

