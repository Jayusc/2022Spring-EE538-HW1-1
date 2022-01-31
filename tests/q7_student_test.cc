#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q7_Student, stdclimb)
{
  CPPLib q6test;
  int input = 4;
  int output = q6test.climbStairs(input);
  EXPECT_EQ(output, 5);
}