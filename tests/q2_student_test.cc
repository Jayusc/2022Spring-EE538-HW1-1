// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q2_Student, ReturnIntro) {
  CPPLib q2test;
  std::vector<int> inputs = {};
  EXPECT_EQ(q2test.findave(inputs), INT32_MIN);
  inputs.pushback = {1,2,3,4}
  EXPECT_EQ(q2test.findave(inputs), 2.50);
}