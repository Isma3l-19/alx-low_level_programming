#include "list.h"
/**
 * get_dnodeint_at_index - returns the nth node of list
 * @head: head of list
 * @index: index
 * Return: adrress of node otherwise NULL
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	for (; index != 0; index--)
	{
		if (head == NULL)
		{
			return (NULL);
		}
		head = head->next;
	}
	return (head);
}
