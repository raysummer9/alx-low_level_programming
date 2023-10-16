#include "main.h"
/**
 * _strlen - gets the length of a string
 *
 * @s: parameter of strings to be counted
 *
 * Return: returns the length of the string
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
		count++;
	return (count);
}
