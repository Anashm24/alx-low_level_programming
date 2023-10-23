#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: a pointer to the first node
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_ti count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++
	}
	return (count);
}
