#include <stdio.h>
#include <stddef.h>
#include "lists.h"

/**
 * print_dlistint - element to be printed
 * @h: head pointer
 * Return: return the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
