#include <gtest/gtest.h>
#include <gmock/gmock.h>

class Base {

};

TEST(Base, case_1)
{
    EXPECT_EQ(0, 0);
}
