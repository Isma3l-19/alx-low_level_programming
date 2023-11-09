#include "lists.h"
/**
 * sum_dlistint - returns sum of all data in list
 * @head: head of list
 * Return: sum of data
 */
int sum_dlistint(dlistint_t *head)
{
	int total  = 0;

	while (head)
	{
		total += head->n;
		total = head->next;
	}
	return (sum);
}
