#include "lists.h"

/**
 * get_nodeint_at_index - get nth node in linked list
 * @head: pointer to the first node
 * @index: nth node to be returned
 * Return: the nth node or NULL if not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (!head)
		return (NULL);
	while (i < index)
	{
		if (!head)
			return (NULL);
		head = head->next;
		i++;
	}
	return (head);
}
