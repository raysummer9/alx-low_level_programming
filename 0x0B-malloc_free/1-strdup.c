#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string in a newly alllocated memory
 * space
 * @str: the string to duplicate
 * Return: returns a pointer to the newly allocated duplicated string
 * or NULL if it fails
 */

char *_strdup(char *str)
{
	char *duplicate;
	unsigned int length = 0;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (str[length])
		length++;

	duplicate = (char *)malloc((length + 1) * sizeof(char));

	if (duplicate == NULL)
		return (NULL);

	for (i = 0; i < length; i++)
		duplicate[i] = str[i];

	duplicate[length] = '\0';

	return (duplicate);
}
