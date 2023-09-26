#include "lists.h"

/**
 * pop_listint - delete first node in linked linked list
 * @head: pointer to first node
 * Return: value of that node
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!head || !*head)
		return (0);
	temp = (*head)->next;
	n = (*head)->n;
	free(*head);
	*head = temp;
	return (n);
}
