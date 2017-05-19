#include "gtest/gtest.h"
#include "LoginController.h"
#include "User.h"
#include "FileReader.h"


TEST(LoginControllerTest, LofFailed)
{
	LoginController log_cntrl;
	ASSERT_EQ(nullptr,log_cntrl.get_user("Volk","man12"));
}

TEST(LoginControllerTest, NormalLog)
{
	LoginController log_cntrl;
	std::shared_ptr<User> user = log_cntrl.get_user("Hapiny","abrakadabra");
	ASSERT_EQ("Artem", user->get_name());
    ASSERT_EQ("Hapiny", user->get_nickname());
    ASSERT_EQ("abrakadabra", user->get_password());
    ASSERT_EQ(0, user->get_id());
}