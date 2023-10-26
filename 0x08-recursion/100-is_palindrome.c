#include "main.h"

/**
 * _strlen_recursion - to get the string length
 * @s: string
 * Return: length of a string
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}

/**
 * compare_string - compare string
 * @s: string
 * @left: smallest iterator
 * @right: largest iterator
 * Return: int
 */

int compare_string(char *s, int left, int right)
{
	if (*(s + left) == *(s + right))
	{
		if (left == right || left == right + 1)
			return (1);
		return (0 + compare_string(s, left + 1, right - 1));
	}
	return (0);
}

/**
 * is_palindrome - a function that checks if a string is
 * a palintrome
 * @s: Parameter
 * Return: returns 0
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare_string(s, 0, _strlen_recursion((s)) - 1));
}
