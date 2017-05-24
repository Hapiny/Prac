#include "gtest/gtest.h"
#include "FileReader.h"
#include "Splitter.h"
#include "User.h"
#include <fcntl.h>
#include <iostream>
#include <fstream>

TEST(FileReaderTest, WrongUserData) 
{
    FileReader reader("test/users.txt");
    std::vector<std::shared_ptr<User>> res = reader.users();
    ASSERT_EQ(1,reader.get_err());
}


