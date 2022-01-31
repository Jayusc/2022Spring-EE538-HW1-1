#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q6_Student, stdsample)
{
  CPPLib q6test;
  std::vector<int> result;
  std::vector<int> expectop;
  result = q6test.CPPLib::Flatten3DVector({{{1, 2}, {3, 4}}, {{5}, {6}, {}}, {{7, 8}}});
  expectop = {1, 2, 3, 4, 5, 6, 7, 8};
  EXPECT_EQ(expectop, result);
};

TEST(Q6_Student2, nullsample)
{
  CPPLib q6test;
  std::vector<int> result;
  std::vector<int> expectop;
  result = q6test.CPPLib::Flatten3DVector({});
  expectop = {INT32_MIN};
  EXPECT_EQ(expectop, result);
};

TEST(Q6_Student, bigsample)
{
  CPPLib q6test;
  std::vector<int> result;
  std::vector<int> expectop;
  result = q6test.CPPLib::Flatten3DVector({{},{{}, {1, 2}, {3, 4}}, {{5}, {6}, {}}, {{7, 8}, {9}, {}, {10, 11, 12, 13}}});
  expectop = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};
  EXPECT_EQ(expectop, result);
};