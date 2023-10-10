#include "main.h"
/**
 * print_alphabet - a function that prints the alphabet in lowercase
 *
 * Return: Always 0 when succesful
 */

void print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		_putchar(i);
	_putchar('\n');
}
