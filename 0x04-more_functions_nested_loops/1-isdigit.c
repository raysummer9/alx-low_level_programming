#include "main.h"
/**
 * _isdigit - is a function that checks for 0 to 9
 * @c: c is the parameter
 * Return: return 1 or 0 if succesful
 */
int _isdigit(int c)
{
	if (c >= 48 && c < 57)
		return (1);
	else
		return (0);
}
