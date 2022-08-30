#include <string>
#include <iostream>

std::string change_min_in_maj(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return (str);
}

int main (int argc, char **argv)
{
    std::string str;

    if (argc <= 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else
    {
        for(int i = 1; i < argc; i++)
        {
            str = change_min_in_maj(argv[i]);
            std::cout << str << "";
        }
       std::cout << std::endl;
    }
    return (0);
}
