#include "main.h"
/**
 * print_alphabet_x10 - this is a function that prints alphabets 10x
 * Return: Always 0 when succesful
 */

void print_alphabet_x10(void)
{
	char i;
	char j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
			_putchar(j);
		_putchar('\n');
	}
}
