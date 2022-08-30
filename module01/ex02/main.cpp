#include <string>
#include <iomanip> 
#include <sstream>
#include <iostream>

int main(void)
{
    std::string str = "HI THIS IS BRAIN";
    std::string*  strPTR = &str;
    std::string&  strREF = str;

    std::cout << str << "\n" << *strPTR << "\n" << strREF << std::endl;
    std::cout << &str << "\n" << strPTR << "\n" << &strREF << std::endl;
    return (0);
}