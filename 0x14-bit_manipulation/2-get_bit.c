#include "main.h"

/**
 * get_bit - get the bit value at the given index
 * @n: number
 * @index: index of bit
 * Return: returns int 1 or 0
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > sizeof(size_t) * 8)
		return (-1);

	for (i = 0; i < index; i++)
		n = n >> 1;
	return ((n & 1));
}
