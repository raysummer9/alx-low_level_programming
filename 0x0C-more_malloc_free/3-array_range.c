#include "main.h"
#include <stdlib.h>
/**
 * array_range - a function that creates an array of integers
 * @min: minimum number
 * @max: maximum number
 * Return: return a pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *arr;
	int size, i;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	arr = (int *)malloc(size * sizeof(int));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = min + i;

	return (arr);
}
