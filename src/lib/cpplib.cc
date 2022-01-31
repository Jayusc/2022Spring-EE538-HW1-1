#include "cpplib.h"
#include "limits"

std::string CPPLib::PrintHelloWorld() { return "**** Hello World ****"; }

// NOTE: write your own function declaration q2 here
double CPPLib::findave(std::vector<int> inputs)
{
    if (inputs.size() == 0)
    {
        return INT32_MIN;
    }
    
    double result = 0;
    for (int n : inputs)
    {
        result += n;
    }
    result /= inputs.size();

    return result;
}

// Question 5 Print your self-introduction
std::string CPPLib::PrintIntro()
{
    // Please fill up this function.
    return "";
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector<std::vector<std::vector<int> > > &input)
{
    // Please fill up this function.
    std::vector<int> res;
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n)
{
    // Please fill up this function.
    return 0;
}
