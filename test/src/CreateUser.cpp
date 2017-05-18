#include "gtest/gtest.h"
#include "User.h"

TEST(CreateUserTest, SimpleCheckingValues) 
{
    User user("Artem", "Hapiny", "abrakadabra", 13);
    ASSERT_EQ("Artem", user.get_name());
    ASSERT_EQ("Hapiny", user.get_nickname());
    ASSERT_EQ("abrakadabra", user.get_password());
    ASSERT_EQ(13, user.get_id());
}