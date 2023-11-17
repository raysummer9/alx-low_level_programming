#include "lists.h"

/**
 * add_node_end - adds new node to the end of the list
 * @head: node head
 * @str: string
 * Return: returns the address of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1, *temp;
	unsigned int i, data = 0;

	node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
		return (NULL);

	node1->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		data++;
	node1->len = data;
	node1->next = NULL;
	temp = *head;

	if (temp == NULL)
		*head = node1;
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = node1;
	}
	return (*head);
}
