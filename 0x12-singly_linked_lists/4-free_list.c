#include "lists.h"

/**
 * free_list - free linked list
 * @head: first pointer to the first node
 */

void free_list(list_t *head)
{
	while (head->next)
	{
		list_t *ptr = head;

		head = head->next;
		free(ptr->str);
		free(ptr);
	}
	free(head->str);
	free(head);
}
