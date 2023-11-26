#include <stdio.h>
#include <stdlib.h>

int main (int ac, char **av)
{	
	int i;
	int sum = 0;

	printf("argc = %d\n", ac); //prints out argument count
	printf("argv is argv[]\n"); //we need a loop to print argv

	for (i = 1; i < ac; i++)
	{
		printf("argv[%d] = %s\n", i, av[i]);
		sum += atoi(av[i]);
	}
	printf("sum is %d\n", sum);
	return (0);
}
