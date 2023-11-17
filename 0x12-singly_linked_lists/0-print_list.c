#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints nodes of the list_t list
 * @h: the linked singly list
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		h = h->next;
		elements++;
	}
	return (elements);
}
