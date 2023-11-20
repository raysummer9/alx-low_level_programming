#include "lists.h"

/**
 * add_nodeint_end - adds a node to teh end of the list
 * @head: pointer to the head
 * @n: the element to be added
 * Return: return element address
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *tmp;

	(void)tmp;

	new_node = malloc(sizeof(listint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;
	tmp = *head;

	if (*head == NULL)
		*head = new_node;
	else
	{
		while (tmp->next != NULL)
		{
			tmp = tmp->next;
		}
		tmp->next = new_node;
	}
	return (*head);
}
