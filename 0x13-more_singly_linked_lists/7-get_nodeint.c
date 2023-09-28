#include "lists.h"
/**
 * get_nodeint_at_index - a function that returns the nth node of the list
 * @head: first node in the linked list
 * @index: index of the node to return
 * Return: pointer to the node we're looking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	if (temp != NULL)
	{
		return (temp);
	}
	else
	{
		return (NULL);
	}
}