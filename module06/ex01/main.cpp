#include <iostream>
#include <stdint.h>
#include "Serialization.hpp"

int	main(void)
{
	Data		data;
	Data		*restored;
	int			*header;
	uintptr_t	ret;

	data.test = 52;
	data.num = -25;
	data.c = 'A';
	std::cout << "Original address: " << &data << std::endl;
	std::cout << "Original value (int)test: " << data.test << std::endl;

	ret = serialize(&data);

	header = reinterpret_cast<int *>(ret);
	std::cout << "First data: " << *header << std::endl;
	header++;
	std::cout << "Second data: " << *header << std::endl;
	header++;
	std::cout << "Third data: " << *reinterpret_cast<char *>(header) << std::endl;

	// Restore the value
	std::cout << "Unintptr address: " << &ret << std::endl;
	restored = deserialize(ret);
	std::cout << "Restored address " << restored << std::endl;
	std::cout << "Restored value of the int: " << restored->test << std::endl;
	return(0);
}