#include "daikintest.h" 
#pragma comment(lib,"daikintest.lib")
#include <limits.h>

#include "gtest/gtest.h"


  
    TEST(Heating, Below10) {
        EXPECT_EQ(heating_on, daikintest::controlling(500));//5.00
        EXPECT_EQ(heating_on, daikintest::controlling(9));//0.09
        EXPECT_EQ(heating_on, daikintest::controlling(-1456));//-14.56
        EXPECT_EQ(heating_on, daikintest::controlling(-1453456));

    }

    TEST(Cooling, Above20) {
        EXPECT_EQ(cooling_on, daikintest::controlling(2100));//21.00
        EXPECT_EQ(heating_on, daikintest::controlling(6400));
        EXPECT_EQ(cooling_on, daikintest::controlling(765600));
        EXPECT_EQ(cooling_on, daikintest::controlling(464646645));
    }

    TEST(Between,Ten20) {
        EXPECT_EQ(all_off, daikintest::controlling(1000));//10.00
        EXPECT_EQ(all_off, daikintest::controlling(2000));
        EXPECT_EQ(all_off, daikintest::controlling(1500));
    }



  

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
