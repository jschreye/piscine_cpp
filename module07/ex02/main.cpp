#include <iostream>
#include "Array.hpp"

#define TAB_SIZE 15
int main(void)
{
	Array<std::string> c(12);
	std::cout << "size of c = " << c.size() << std::endl;
	Array<int> a(TAB_SIZE);

	try
	{
		for (size_t i = 0; i < TAB_SIZE; i++)
			a[i] = i;
		const Array<int> a_const(a);
		for (size_t i = 0; i < TAB_SIZE; i++)
			std::cout << "a[" << i << "] " << a_const[i] << '\n';
		std::cout << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		Array<int> b(a);

		b[0] = 8;
		std::cout << "b:" << b[0] << std::endl;
		std::cout << "a:" << a[3] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}

