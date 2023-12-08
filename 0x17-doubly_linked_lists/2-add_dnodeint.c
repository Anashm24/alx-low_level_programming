#include "lists.h"


/**
* add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
* @head: A double pointer to the head of the list.
* @n: The data for the new node.
*
* Return: A pointer to the newly added node.
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);

	temp->prev = NULL;
	temp->n = n;
	h = *head;

	if (h != NULL)
	{
		while (h->prev != NULL)
			h = h->prev;
	}

	temp->next = h;
	if (h != NULL)
		h->prev = temp;

	*head = temp;

	return (temp);
}
