#include "stepcounter.h" //Includes the header
#include <gtest/gtest.h> //Includes google test
#include <iostream>
using namespace std;

TEST(CounterTest, CounterHello) {
    //Create object
    StepCounter my_counter;

    //Get count
    int result =my_counter.get();

    //Test if count starts at 0
    EXPECT_EQ(result,0);

}

TEST(CounterTest, IncrementOnce) {

    //Create object
    StepCounter my_counter;

    //Increment count
    my_counter.Increment();

    //Get count
    int result = my_counter.get();

    //Test if count starts at 0
    EXPECT_EQ(result,1);
}