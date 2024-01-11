#ifndef LISTS_H
#define LISTS_H

/**
 * struct dlistint_s - elements
 * @n: number of elements
 * @prev: pointer to previous node
 * @next: pointer to next node
 * Return: retun 0
 */

typedef struct dlistint_s
{
	int n;
	struct dlistint_s *prev;
	struct dlistint_s *next;
} dlistint_t;

size_t print_dlistint(const dlistint_t *h);

#endif
