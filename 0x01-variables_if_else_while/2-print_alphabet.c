#include <stdio.h>

/**
 * main - Entry point
 * Description: A program that prints a to z in lowercase
 * Return: Always 0 (success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	putchar(i);
	putchar('\n');
	return (0);
}
