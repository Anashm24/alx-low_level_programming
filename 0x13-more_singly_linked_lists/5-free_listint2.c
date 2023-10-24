#include "list.h"

/**
 * free_listint2 - free a list of ints
 * @head: address of pointer of the first node
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *node, temp;

	if (head == NULL)
		return;
	
	node = *head;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
	*head = NULL;
}
