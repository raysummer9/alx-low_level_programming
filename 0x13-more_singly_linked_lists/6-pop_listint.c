#include "lists.h"

/**
 * pop_listint - removes the first element from a list
 * @head: pointer to the head node
 * Return: return 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int n;
	listint_t *tmp;

	if (head == NULL || *head == NULL)
		return (0);
	n = (*head)->n;
	tmp = *head;
	*head = (*head)->next;
	free(tmp);
	return (n);
}
