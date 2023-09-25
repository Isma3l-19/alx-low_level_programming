#include "lists.h"
/**
 * add_nodeint_end - a function that adds a new node at the end of listint_t
 * @head: pointer to the first element in the list
 * @n: new data
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newNode;
	listint_t *temp = *head;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = NULL;
	if (*head == NULL)
	{
		*head = newNode;
		return (newNode);
	}
	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = newNode;
	return (newNode);
}
