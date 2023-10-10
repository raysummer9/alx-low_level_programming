#include "main.h"
/**
 * _isalpha - checks for alphabets
 * @c: the parameter
 * Return: Return 1 or 0 if succesful
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
