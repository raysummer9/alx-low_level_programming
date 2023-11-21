#include "lists.h"

/**
 * get_nodeint_at_index - get a node from the list
 * @head: pointer to the first element of the list
 * @index: node to get
 * Return: return head
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a;

	for (a = 0; a < index; a++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}
	return (head);
}
