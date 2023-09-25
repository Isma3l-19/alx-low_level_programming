#include "lists.h"
/**
 * sum_listint - a function that returns the sum of data in listint_t
 * @head: first node in the linked list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *temp = head;

	while (temp)
	{
		sum = sum + temp->n;
		temp = temp->next;
	}

	return (sum);
}
