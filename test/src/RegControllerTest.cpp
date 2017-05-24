#include "gtest/gtest.h"
#include "RegistrationController.h"

TEST(RegistrationController, FirstDigitInName)
{
	RegistrationController reg_ctrl;
	ASSERT_EQ(0,reg_ctrl.add_user("1adin","bad","name","5"));
}

TEST(RegistrationController,FirstDigitInNick)
{
	RegistrationController reg_ctrl;
	ASSERT_EQ(0,reg_ctrl.add_user("Aram","12gnu","name","5"));
}

TEST(RegistrationController, NormalData)
{
	RegistrationController reg_ctrl;
	ASSERT_EQ(1,reg_ctrl.add_user("Gleb","Gleb","Gleb","13"));
}