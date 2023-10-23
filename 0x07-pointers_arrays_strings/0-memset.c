#include "main.h"

/**
 * _memset - A funtion that fills memory with a constant byte
 * @s: parameter 1
 * @b: parameter 2
 * @n: paramter 3
 * Return: Return ptr
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n > 0)
	{
		*s = b;
		s++;
		n--;
	}
	return (ptr);
}
