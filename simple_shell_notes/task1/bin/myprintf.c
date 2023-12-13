#include "shell.h"

/**
 * myprintf - function that prints to the standar output
 * @str: string to be printed
 * Return: return void
 */

void myprintf(const char *str)
{
	write(STDOUT_FILENO, str, strlen(str));
}
