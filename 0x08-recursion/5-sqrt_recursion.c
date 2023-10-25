#include "main.h"

/**
 * _sqrt_recursion - returns the square root
 * @n: Parameter
 * Return: always 0
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0 || n == 1)
		return (n);
	else
		return (sqrt_finder(n, 1));
}

/**
 * sqrt_finder - finds the square root
 * @guess: parameter 1
 * @n: parameter 2
 * Return: returns 0
 */

int sqrt_finder(int n, int guess)
{
	if (guess * guess == n)
		return (guess);
	else if (guess * guess > n)
		return (-1);
	else
		return (sqrt_finder(n, guess + 1));
}
