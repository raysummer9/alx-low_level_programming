#include "lists.h"

void mainfunc(void)__attribute__((constructor));
/**
 * mainfunc - a function that runs before main function
 */

void mainfunc(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
