#include "lists.h"
/**
 * add_nodeint - a function that adds a new node at the end of listint_t
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node in the list
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newNode;

	newNode = malloc(sizeof(listint_t));
	if (!newNode)
	{
		return (NULL);
	}
	newNode->n = n;
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}
