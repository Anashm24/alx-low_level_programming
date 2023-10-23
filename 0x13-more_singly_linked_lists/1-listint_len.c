#include "lists.h"
#include <stdio.h>

/**
 * listint_len - return all the elements of a listint_t list.
 *
 * @h: head of linklist node
 *
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t len = 0;

	while (h != NULL)
	{
		h = h->next;
		len++;
	}
	return (len)
}	
