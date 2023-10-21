#include "main.h"
/**
 * cap_string - capitalizes a string
 * @str: parameter
 * Return: str
 */

char *cap_string(char *str)
{
	int new_word = 1;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] = str[i] - 'a' + 'A';
			new_word = 0;
		}
		else
		{
			new_word = 0;
			if (str[i] == ' ' || str[i] == '\t' ||
			str[i] == '\n' || str[i] == ';' || str[i] == '.'
			|| str[i] == '!' || str[i] == '?' || str[i] == '"'
			|| str[i] == '(' || str[i] == ')'
			|| str[i] == '{' || str[i] == '}')
			{
				new_word = 1;
			}
		}
	}
	return (str);
}
