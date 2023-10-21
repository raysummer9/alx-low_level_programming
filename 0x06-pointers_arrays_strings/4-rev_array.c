#include "main.h"

/**
 * reverse_array - prints an array in reverse
 * @a: parameter 1
 * @n: parameter 2
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int i, j;
	int temp;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
