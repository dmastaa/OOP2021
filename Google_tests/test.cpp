#include "lib/astroid.h"
#include "lib/googletest/include/gtest/gtest.h"

//тест конструкторов
TEST(AstroidConstructor, DefaultConstructor)
{
    Lab::Astroid a1;
    ASSERT_EQ(3, a1.getR());
}

int main(int argc, char* argv[]) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
