#include "lists.h"
/**
 * delete_nodeint_at_index - a function that deletes a node at the index
 * @head: pointer to the first element in the listint_t list
 * @index: index of the node to be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *cur = NULL;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (i < index - 1)
	{
		if (!temp || !(temp->next))
		{
			return (-1);
		}
		temp = temp->next;
		i++;
	}
	cur = temp->next;
	temp->next = cur->next;
	free(cur);
	return (1);
}
