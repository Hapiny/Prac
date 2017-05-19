#include "gtest/gtest.h"
#include "Splitter.h"

TEST(SplitterTest, String_with_Spaces) 
{
    Splitter splitter(' ');
    std::vector<std::string> splitted = splitter.split("A B   C D E F    AA B    B   E     ");
    ASSERT_EQ(10, (int)splitted.size());
    ASSERT_EQ("A", splitted[0]);
    ASSERT_EQ("B", splitted[1]);
    ASSERT_EQ("E", splitted[9]);
}

