#include "variadic_functions.h"

/**
 * sum_them_all - sum all parameters passed
 * @n: number of arguments
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i;

	va_list holder;

	va_start(holder, n);

	if (n == 0)
		return (0);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(holder, const unsigned int);
	}
	va_end(holder);
	return (sum);
}
