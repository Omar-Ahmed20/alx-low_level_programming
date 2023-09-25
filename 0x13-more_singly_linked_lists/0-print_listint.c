#include "lists.h"

/**
 * print_listint - print all the values of linked list
 * @h: input linked list
 * Return: number of elements in the list
 */

size_t print_listint(const listint_t *h)
{
	int count = 0;

	if (h == NULL)
		return (0);
	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
