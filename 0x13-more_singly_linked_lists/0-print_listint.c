#include "lists.h"

/**
 * print_listint - singly linked list
 * @h: a pointer of type listint_t
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++
	}
	return (count);
}
