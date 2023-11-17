#include "lists.h"

/**
 * add_node - a function that adds a new node to the begining
 * @head: node head
 * @str: string that will be stored
 * Return: returns the address of a new node or NULL if it falis
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1;
	unsigned int i;
	unsigned int data = 0;

	node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
		return (NULL);

	node1->str = strdup(str);

	for (i = 0; str[i] != '\0'; i++)
		data++;

	node1->len = data;
	node1->next = *head;
	*head = node1;

	return (*head);

}
