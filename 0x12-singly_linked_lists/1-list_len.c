#include "lists.h"

/**
 * list_len - prints the length of a list
 * @h: anchor node (head)
 * Return: returns the length of nodes
 */

size_t list_len(const list_t *h)
{
	size_t elements;

	elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}
