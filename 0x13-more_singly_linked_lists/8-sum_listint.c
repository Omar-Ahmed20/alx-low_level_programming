#include "lists.h"

/**
 * sum_listint - calculate sum of all values of list
 * @head: pointer to the first node
 * Return: sum of all values or 0 if none
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
