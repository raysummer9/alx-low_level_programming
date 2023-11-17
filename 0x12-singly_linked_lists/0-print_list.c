#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints nodes of the list_t list
 * @h: the linked singly list
 * Return: The number of nodes.
 */

size_t print_list(const list_t *h)
{
	size_t elements;

	elements = 0;

	if (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		else
			printf("[%d] %s\n", h->len, h->str);

		h = h->next;
		elements++;
	}
	return (elements);
}
