#include "lists.h"

/**
 * reverse_listint - reverse linked list
 * @head: pointer to the first node
 * Return: pointer to the reversed node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *temp, *temp2;

	if (!head || !*head)
		return (NULL);
	temp = temp2 = NULL;
	while (*head != NULL)
	{
		temp2 = (*head)->next;
		(*head)->next = temp;
		temp = *head;
		*head = temp2;
	}
	*head = temp;
	return (temp);
}
