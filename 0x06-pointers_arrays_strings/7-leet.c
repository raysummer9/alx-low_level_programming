#include "main.h"

/**
 * leet - replace letters with numbers
 * @str: parameter
 * Return: return str
 */

char *leet(char *str)
{
	int i, j;
	char c[] = "aAeEoOtTlL";
	char d[] = "443307711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; c[j] != '\0'; j++)
		{
			if (str[i] == c[j])
			{
				str[i] = d[j];
			}
		}
	}
	return (str);
}
