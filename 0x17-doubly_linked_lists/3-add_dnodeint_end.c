#include "lists.h"
/**
 * add_dnodeint_end - adds new node at the end of list
 * @head: pointer to the head of list
 * @n: integer for the new node
 * Return: address of new element otherwise NULL
 */
dlistint *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	new->prev = last;
	return (new);
}
