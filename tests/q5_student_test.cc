#include "src/lib/cpplib.h"

#include <map>
#include <vector>

#include "gtest/gtest.h"

// Add your own tests in this file
TEST(Q5_Student, ReturnIntro)
{
  CPPLib intro;
  std::string pintro;
  EXPECT_EQ(intro.PrintIntro(), "done");
}