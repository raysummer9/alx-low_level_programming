#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a function that searches a string for any set of bytes
 * @s: parameter 1
 * @accept: parameter 2
 * Return: return a pointer to the bytes in s
 */

char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s != '\0')
	{
		a = accept;
		while (*a != '\0')
		{
			if (*s == *a)
				return (s);
			a++;
		}
		s++;
	}
	return (NULL);
}
