#include "lists.h"
#include <stdio.h>
/**
 * print_list - print linked list
 * @h: head pointer to the first element in the list
 * Return: count of nodes
 */

size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			count++;
		}
		printf("[%d] ", h->len);
		printf("%s\n", h->str);
		h = h->next;
		count++;
	}
	return (count);
}
