#include <stdio.h>
#include <stdlib.h>

//write a program that prints all the argument without using ac

int main (int ac, char **av)
{	

	printf("argv is argv[]\n"); //we need a loop to print argv

	while (*av != NULL)
	{
		printf("argv = %s\n", *av);
		av++;
	}
	return (0);
}
