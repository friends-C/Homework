#include <iostream>
#include "accumulate.hpp"
#include <vector>
//#include <numeric>

int main()
{
    // vector definition
    std::vector<int> v1{10, 20, 30, 40};

    // calling the accumulate() function 
    int productValue = accumulate(v1.begin(), v1.end(), 1, std::multiplies<int>());

    // printing the result
    std::cout << "The value of the product is " << productValue << std::endl;

    return 0;
}
