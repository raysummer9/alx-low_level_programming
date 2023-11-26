#include <stdio.h>
#include <stdlib.h>

//printout all the content of av without using ac

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
