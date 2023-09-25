#include "lists.h"

/**
 * listint_len - return number of elements
 * @h: input linked list
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
