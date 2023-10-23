#include "lists.h"
#include <stdlib.h>
/**
  * add_nodeint_end - add node at the end of a listint_t list.
  *
  * @head: head of double pointer
  * @n: int add the list
  *
  * Return: the address of the new element
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newend = malloc(sizeof(listint_t));

	if (newend == NULL)
	{
		return (NULL);
	}
	newend->n = n;
	newend->next = NULL;
	if (head == NULL)
	{
		return (newend);
	}
	listint_t *ptr = *head;

	while (ptr != NULL)
	{
		ptr = ptr->next;
	}
	newend = ptr->next;

	return (newend);
}
