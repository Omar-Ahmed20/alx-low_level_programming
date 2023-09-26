#include "lists.h"

/**
 * free_listint - free linked list memory
 * @head: pointer to the first node
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
	free(head);
}
