#include "lists.h"

/**
 * init_new_node - creates a new node
 * @n: data of the node
 * Return: pointer to the node
 */

listint_t *init_new_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;

	return (new_node);

}


/**
 * insert_nodeint_at_index - inserts a new node
 * @head: pointer to the first node
 * @idx: position of the new node
 * @n: number in the new node
 * Return: return address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *tmp;
	listint_t *old_tmp;
	listint_t *new_node;

	tmp = *head;
	if (head == NULL)
		return (NULL);
	new_node = init_new_node(n);

	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	if (idx == 0)
		*head = new_node;
	for (i = 0; i < idx - 1 && tmp != NULL && idx != 0; i++)
		tmp = tmp->next;

	if (tmp == NULL)
		return (NULL);
	if (idx == 0)
		new_node->next = tmp;
	else
	{
		old_tmp = tmp->next;
		tmp->next = new_node;
		new_node->next = old_tmp;
	}
	return (new_node);
}
