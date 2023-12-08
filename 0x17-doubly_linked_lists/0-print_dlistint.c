#include "lists.h"

/**
* print_dlistint - Prints all the elements.
* @h: A pointer to the head of the list.
*
* Return: The number of nodes in the list.
*/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *current = h;
	int count = 0;

	if (current == NULL)
		return (count);

	while (current->prev != NULL)
		current = current->prev;


	while (current != NULL)
	{
		printf("%d\n", current->n);
		current = current->next;
		count++;
	}
	return (count);
}
