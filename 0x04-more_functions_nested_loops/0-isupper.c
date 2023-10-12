#include "main.h"
/**
 * _isupper - checks if the letter is uppercase
 * @c: parameter
 * Return: retuns 1 or 0 if succesful
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
