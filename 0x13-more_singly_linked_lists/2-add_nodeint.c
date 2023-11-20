#include "lists.h"

/**
 * add_nodeint - a function to add a new node to the
 * begining of a list
 * @head: head pointer
 * @n: the new int
 * Return: address of element or null
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nw_node;

	if (head == NULL)
		return (NULL);

	nw_node = malloc(sizeof(listint_t));
	if (nw_node == NULL)
		return (NULL);

	if (*head == NULL)
		nw_node->next = NULL;
	else
		nw_node->next = *head;
	nw_node->n = n;
	*head = nw_node;

	return (*head);
}
