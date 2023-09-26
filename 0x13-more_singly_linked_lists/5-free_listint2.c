#include "lists.h"

/**
 * free_listint2 - free memory of linked list
 * @head: pointer to the first node
 */

void free_listint2(listint_t **head)
{
	listint_t *t;
	listint_t *temp = *head;

	if (!head)
		return;
	while (temp)
	{
		t = temp;
		temp = temp->next;
		free(t);
	}
	*head = NULL;
}
