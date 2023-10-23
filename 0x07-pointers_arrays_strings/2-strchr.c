#include "main.h"
#include <stddef.h>
/**
 * _strchr - function that locates a character in a string
 * @s: parameter 1
 * @c: parameter 2
 * Return: return s, c or NULL
 *
 */

char *_strchr(char *s, char c)
{

	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	if (c == '\0')
		return (s);
	else
		return (NULL);
}
