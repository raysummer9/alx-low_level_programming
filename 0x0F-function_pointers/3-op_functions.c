#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - sum two numbers
 * @a: first number
 * @b: second number
 * Return: return a sum of two numbers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtract two numbers
 * @a: first number
 * @b: second number
 * Return: difference between a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply two numbers
 * @a: first number
 * @b: second number
 *  Return: return multiplied value
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divide two numbers
 * @a: first number
 * @b: second number
 * Return: return divided value
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - remainder
 * @a: first number
 * @b: second number
 * Return: return remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
