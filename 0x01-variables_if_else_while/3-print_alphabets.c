#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints alphabets in upper and lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	int i;

	for (i = 'a'; i <= 'z'; i++)
		putchar (i);

	for (i = 'A'; i <= 'Z'; i++)
		putchar (i);
	putchar('\n');
	return (0);
}

