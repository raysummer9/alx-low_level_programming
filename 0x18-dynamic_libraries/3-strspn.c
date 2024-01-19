#include "main.h"

/**
 * _strspn - function that gets the length of a prefix substring
 * @s: prototype 1
 * @accept: prototype 2
 * Return: return count
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int found;
	char *a;

	while (*s != '\0')
	{
		found = 0;
		a = accept;

		while (*a != '\0')
		{
			if (*s == *a)
			{
				found = 1;
				break;
			}
			a++;
		}

		if (found)
			count++;
		else
			break;
		s++;

	}

	return (count);
}
