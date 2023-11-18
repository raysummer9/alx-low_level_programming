#include "lists.h"

/**
 * free_list - frees nodes
 * @head: node head
 */

void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		free(head->str);
		head = tmp;
	}
	free(head->str);
	free(head);
}
