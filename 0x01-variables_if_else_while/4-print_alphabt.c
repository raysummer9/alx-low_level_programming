#include <stdio.h>

/**
 * main - Entry point
 * Description: Print the letters of the alphabet but omit some letters
 * Return: Always 0
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar (i);
	putchar ('\n');
	return (0);
}
