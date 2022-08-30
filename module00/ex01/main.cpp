#include "Phonebook_Class.hpp"

std::string change_min_in_maj(std::string str)
{
    for(size_t i = 0; i < str.length(); i++)
    {
        str[i] = toupper(str[i]);
    }
    return (str);
}

int    ft_stoi(const std::string &str)
{
    int    i;

    if (std::istringstream(str) >> i)
        return(i);
    else
        throw std::exception();
}

int main (void)
{
    int c = 0;
    int c1 = 0;
    int size = 8;
    Phonebook phonebook;
    std::string str;
    
    phonebook.display_rule();
    while (1)
    {
        std::getline(std::cin, str);
        str = change_min_in_maj(str);
        if (c == size)
            c = 0;
        if (str.compare("ADD") == 0)
        {
            phonebook.contact[c].putdata(c);
            c++;
            if (c1 != size)
                c1++;
        }
        else if (str.compare("SEARCH") == 0 && c1 > 0)
        {
            phonebook.display();
            for (int i = 0; i < c1; i++)
                phonebook.contact[i].display_four_index(c);
            std::cout << "choose your contact" << std::endl;
            while(1)
            {
                std::getline(std::cin, str);
                while (str.empty())
                {
                    std::cout << "don t existe" << std::endl;
                    std::cout << "choose your contact" << std::endl;
                    std::getline(std::cin, str);
                }
                while (str.compare("0") != 0 && str.compare("1") != 0 && str.compare("2") != 0
                    && str.compare("3") != 0 && str.compare("4") != 0 && str.compare("5") != 0
                    && str.compare("6") != 0 && str.compare("7") != 0)
                {
                    std::cout << "don't existe" << std::endl;
                    std::cout << "choose your contact" << std::endl;
                    std::getline(std::cin, str);
                }
                int str_to_int = ft_stoi(str);
                if (str_to_int < c1)
                {
                    phonebook.contact[str_to_int].display_all();
                    break ;
                }
                else
                {
                    std::cout << "don t existe" << std::endl; 
                    std::cout << "choose other contact" << std::endl;
                }
            }
        }
        else if (str.compare("EXIT") == 0)
            return (0);
        else
           std::cout << "BAD ARGUMENT MA GEULE" << std::endl; 
    }
    return (0);
}
