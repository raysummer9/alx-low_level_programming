#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: head pointer
 * @idx: node index
 * @n: node number
 * Return: NULL or new nodw
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	if (h == NULL)
		return (NULL);

	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	if (idx == 0)
		return (insert_at_the_begining(h, new_node));
	else
		return (insert_at_index(h, idx, new_node));

/**
 * insert_at_beginning - Inserts a new node at the beginning of the list.
 * @h: Pointer to the head of the doubly linked list.
 * @new_node: Pointer to the new node.
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_at_beginning(dlistint_t **h, dlistint_t *new_node)
{
	new_node->prev = NULL;
	new_node->next = *h;

	if (*h != NULL)
		(*h)->prev = new_node;

	*h = new_node;

	return (new_node);
}

/**
 * insert_at_index - Inserts a new node at the specified index in the list.
 * @h: Pointer to the head of the doubly linked list.
 * @idx: Index of the list where the new node should be added.
 * @new_node: Pointer to the new node.
 *
 * Return: Address of the new node, or NULL if it failed.
 */

dlistint_t *insert_at_index(dlistint_t **h, unsigned int idx, dlistint_t *new_node)
{
	dlistint_t *current = *h;
	unsigned int i;

	for (i = 0; i < idx - 1 && current != NULL; i++)
		current = current->next;

	if (i == idx - 1 && current != NULL)
	{
		new_node->prev = current;
		new_node->next = current->next;

		if (current->next != NULL)
			current->next->prev = new_node;

		current->next = new_node;
	}

	else
	{
		free(new_node);
		return (NULL);
	}

	return (new_node);
}
