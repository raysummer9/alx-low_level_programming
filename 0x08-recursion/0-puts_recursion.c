#include "main.h"

/**
 * _puts_recursion - Prints a string
 * @s: parameter 1
 * Return: always 0
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar ('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
