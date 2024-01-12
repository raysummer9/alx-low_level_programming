#include "lists.h"

/**
 * sum_dlistint - a function tat returns sum of all the data
 * @head: head pointer
 * Return: return 0 if the list is empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}
