#include "lists.h"

/**
 * sum_listint - returns the sum of data in a list
 * @head: pointer to the node head
 * Return: return 0 if empty
 */

int sum_listint(listint_t *head)
{
	int add = 0;

	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		add += head->n;
		head = head->next;
	}
	return (add);
}
