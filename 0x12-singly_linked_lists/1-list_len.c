#include "lists.h"

/**
 * list_len - counts number of elements in linked list
 * @h: input linked list
 * Return: number of elements in linked list
 */

size_t list_len(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			h = h->next;
			count++;
		}
		h = h->next;
		count++;
	}
	return (count);
}
