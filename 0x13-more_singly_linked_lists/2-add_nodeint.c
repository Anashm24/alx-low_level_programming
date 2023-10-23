#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint -  adds a new node at the beginning
 * @head: a pointer to the first node
 * @n: an integer
 *
 * Return: the adresse of new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	lisint_t *new = malloc(sizeof(listint_t));

	new->n = n;
	new->next = NULL;

	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		return (new);
	}
	new->next = *head;
	new = *head;

	return (new);
}
