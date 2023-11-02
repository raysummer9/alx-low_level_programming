#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat - concatenates string
 * @s1: string 1
 * @s2: string 2
 * @n: parameter 3
 * Return: return concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j;
	unsigned int s1len = 0;
	unsigned int s2len = 0;
	char *output;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[s1len] != '\0')
		s1len++;
	while (s2[s2len] != '\0')
		s2len++;

	if (n >= s2len)
		n = s2len;
	output = (char *)malloc(s1len + n + 1);

	if (output == NULL)
		return (NULL);

	for (i = 0; i < s1len; i++)
		output[i] = s1[i];

	for (j = 0; j < n; j++)
		output[i + j] = s2[j];

	output[i + j] = '\0';
	return (output);
}
