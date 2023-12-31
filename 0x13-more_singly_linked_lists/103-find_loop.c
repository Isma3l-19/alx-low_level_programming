#include "lists.h"
/**
 * find_listint_loop - a function that finds the loop in a linked list
 * @head: head of the linked list
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *old = head;
	listint_t *new = head;

	if (!new)
	{
		return (NULL);
	}
	while (old && new && new->next)
	{
		new = new->next->next;
		old = old->next;
		if (new == old)
		{
			old = head;
			while (old != new)
			{
				old = old->next;
				new = new->next;
			}
			return (new);
		}
	}
	return (NULL);
}
