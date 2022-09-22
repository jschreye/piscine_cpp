#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <stdint.h>

struct Data
{
	int		test;
	int		num;
	char	c;
};

uintptr_t	serialize(Data* ptr);
Data*		deserialize(uintptr_t raw);

#endif