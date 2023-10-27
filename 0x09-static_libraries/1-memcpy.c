#include "main.h"

/**
 * _memcpy - function that coppies memory area
 * @dest: destination parameter
 * @src: source parameter
 * @n: parameter 3
 * Return: return pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *dest_start = dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	return (dest_start);
}
