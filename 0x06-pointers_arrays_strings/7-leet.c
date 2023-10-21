#include "main.h"

/**
 * leet - replace letters with numbers
 * @str: parameter
 * Return: return str
 */

char *leet(char *str)
{
	char *ptr = str;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
			str[i] = '4';
		else if (str[i] == 'e' || str[i] == 'E')
			str[i] = '3';
		else if (str[i] == 'o' || str[i] == 'O')
			str[i] = '0';
		else if (str[i] == 't' || str[i] == 'T')
			str[i] = '7';
		else if (str[i] == 'l' || str[i] == 'L')
			str[i] = '1';
	}
	return (ptr);
}
