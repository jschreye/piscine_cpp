#include "easyfind.hpp"

int main(void)
{
    std::vector<int> list(20);
    std::vector<int>::iterator n;
    for (int i = 0; i < 20; i++)
        list.push_back(i * 3);

   n = easyfind(list, 16);
   if (n == list.end())
       std::cout << "The value has not found." << std::endl;
   else
       std::cout << "Occurence: " << *n << std::endl;

   n = easyfind(list, -4);
   if (n == list.end())
       std::cout << "The value has not found." << std::endl;
   else
       std::cout << "Occurence: " << *n << std::endl;

   n = easyfind(list, 32);
   if (n == list.end())
       std::cout << "The value has not found." << std::endl;
   else
       std::cout << "Occurence is: " << *n << std::endl;
    
   n = easyfind(list, 3);
   if (n == list.end())
       std::cout << "The value has not found." << std::endl; 
   else
       std::cout << "Occurence is: " << *n << std::endl;
   return 0;
}
