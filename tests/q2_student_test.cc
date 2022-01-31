// NOTE: Add your own q2 tests in this file
#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file

TEST(Q2_Student, NullInputs)
{
  CPPLib q2test;
  std::vector<int> inputs = {};
  EXPECT_EQ(q2test.findave(inputs), INT32_MIN);
}

TEST(Q2_Student, EasyInputs)
{
  CPPLib q2test;
  std::vector<int> inputs = {1};
  inputs.push_back(2);
  inputs.push_back(3);
  inputs.push_back(4);
  inputs.push_back(5);
  EXPECT_EQ(q2test.findave(inputs), 3);
}

TEST(Q2_Student, BigInputs)
{
  CPPLib q2test;
  std::vector<int> inputs = {538};
  inputs.push_back(-12123);
  inputs.push_back(2412);
  inputs.push_back(732553);
  inputs.push_back(-489263);
  EXPECT_EQ(q2test.findave(inputs), 46823.4);
}

TEST(Q2_Student, NegtiveInputs)
{
  CPPLib q2test;
  std::vector<int> inputs = {-1};
  inputs.push_back(-2);
  inputs.push_back(3);
  inputs.push_back(-4);
  EXPECT_EQ(q2test.findave(inputs), -1);
}

