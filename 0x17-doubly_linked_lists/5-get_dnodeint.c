#include "lists.h"

/**
 * get_dnodeint_at_index - a function that returns the nth node
 * @head: head pointer
 * @index: node index
 * Return: Return nth node or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
		head = head->next;

	if (i == index)
		return (head);
	else
		return (NULL);

}
