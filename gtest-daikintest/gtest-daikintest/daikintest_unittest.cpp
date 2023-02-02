#include "daikintest.h" 
#pragma comment(lib,"daikintest.lib")
#include <limits.h>

#include "gtest/gtest.h"


  
    TEST(Heating, Below10) {
        EXPECT_EQ(heating_on, daikintest::controlling(5));
        EXPECT_EQ(heating_on, daikintest::controlling(9));
        EXPECT_EQ(heating_on, daikintest::controlling(-1456));
        EXPECT_EQ(heating_on, daikintest::controlling(-1456));

    }

    TEST(Cooling, Above20) {
        EXPECT_EQ(cooling_on, daikintest::controlling(21));
        EXPECT_EQ(heating_on, daikintest::controlling(64));
        EXPECT_EQ(cooling_on, daikintest::controlling(7656));
        EXPECT_EQ(cooling_on, daikintest::controlling(464646645));
    }

    TEST(Between,Ten20) {
        EXPECT_EQ(all_off, daikintest::controlling(10));
        EXPECT_EQ(all_off, daikintest::controlling(20));
        EXPECT_EQ(all_off, daikintest::controlling(15));
    }



  

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
