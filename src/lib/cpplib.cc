#include "cpplib.h"
#include "iostream"
#include "limits"

std::string CPPLib::PrintHelloWorld()
{
    return "**** Hello World ****";
}

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
    std::cout << "Jinghui Zhu" << std::endl;
    std::cout << "jinghui@usc.edu" << std::endl;
    std::cout << "EE student in USC" << std::endl
              << "Keyboardlist/Guitarist in rock band" << std::endl;

    return "done";
}

// Question 6
std::vector<int> CPPLib::Flatten3DVector(const std::vector<std::vector<std::vector<int> > > &input)
{
    // Please fill up this function.
    std::vector<int> res = {INT32_MIN};
    if (input.size() != 0)
    {
        res.clear();
        for (auto i : input)
        {
            if (i.size() == 0)
            {
                continue;
            }
            for (auto j : i)
            {
                if (j.size() == 0)
                {
                    continue;
                }
                for (auto k : j)
                {
                    res.push_back(k);
                }
            }
        }
    }
    return res;
}

// Question 7 Climbing Stairs
int CPPLib::climbStairs(int n)
{
    // Please fill up this function.
    return 0;
}
