#include "main.h"

/**
 * prime_a - calculates if its a prime number
 * @a: input
 * @b: divisor
 * Return: return 0
 */

int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}

	else if (a == b)
		return (1);
	else
		return (prime_a(a, b + 1));

}

/**
 * is_prime_number - a function that returns a prime number
 * @n: parameter
 * Return: 0
 */

int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
