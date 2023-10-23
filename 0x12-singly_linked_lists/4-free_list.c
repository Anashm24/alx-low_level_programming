#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - Realease the memory allocated for a list
 *
 * @head: A pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	list_t *nextnode;

	while (head != NULL)
	{
		nextnode = head->next;
		free(head->str);
		free(head);
		head = nextnode;
	}
}
