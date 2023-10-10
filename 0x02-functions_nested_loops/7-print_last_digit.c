#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: the parameter
 * Return: returns the value of the digit
 */
int print_last_digit(int n)
{
	int r;

	r = n % 10;

	if (n < 0)
		r = -r;
	_putchar(r + '0');
	return (r);
}
