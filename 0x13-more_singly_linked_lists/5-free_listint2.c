#include "list.h"

/**
 * free_listint2 - free a list of ints
 * @head: address of pointer of the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		node = *head;
		node = (*head)->next;
		free(node);
	}
	*head = NULL;
}
