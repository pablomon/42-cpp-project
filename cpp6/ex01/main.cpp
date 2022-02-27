// #include <string>
#include <iostream>
#include <stdint.h>
#include <stdio.h>

struct Data
{
	int x,y,z;
};

uintptr_t serialize(Data* ptr)
{
	uintptr_t serializedPtr;

	int *serialized = new int[3];
	int *tmp = (int*)ptr;
	for (size_t i = 0; i < 3; i++)
		serialized[i] = tmp[i];
	serializedPtr = (uintptr_t)ptr;

	return serializedPtr;
}

Data* deserialize(uintptr_t raw)
{
	Data *d;

	d = new Data;
	d->x = 23;
	int	*rawptr = (int*)raw;
	int *tmp = (int*)d;
	for (size_t i = 0; i < 3; i++)
		tmp[i] = rawptr[i];

	return d;
}

void	printData(Data *data)
{
	std::cout << "x = " << data->x << "\n";
	std::cout << "y = " << data->y << "\n";
	std::cout << "z = " << data->z << "\n";
}


int main(void)
{
	
	Data od = {5, -475458, 1234};
	std::cout << "Original data:\n";
	printData(&od);
	uintptr_t serialized = serialize(&od);
	Data *deserialized = deserialize(serialized);
	std::cout << "Deserialized data:\n";
	printData(deserialized);

	return 0;
}
