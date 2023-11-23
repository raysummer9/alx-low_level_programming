#include "main.h"

/**
 * set_bit - set bit to 1
 * @n: pointer to the bit we want to manipulate
 * @index: bit position
 * Return: return 1 if succesful
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int mask;

	if (index > sizeof(unsigned int) * 8)
		return (-1);
	mask = 1;
	mask = mask << index;
	*n = ((*n) | mask);
	return (1);
}
