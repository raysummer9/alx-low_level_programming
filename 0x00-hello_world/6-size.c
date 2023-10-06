#include <stdio.h>

/**
 * main - the starting point of the program
 * Description: printing data types and their sizes
 * return: return 0 if succesful
*/

int main(void)
{
	printf("Size of a char: %lu byte(s)", sizeof(char)"\n");
	printf("Size of an int: %lu byte(s)", sizeof(int)"\n");
	printf("Size of a long int: %lu byte(s)", sizeof(long int)"\n");
	printf("Size of a long long int: %lu byte(s)", sizeof(long long int)"\n");
	printf("Size of a float: %lu byte(s)", sizeof(float)"\n");
	return (0);
}
