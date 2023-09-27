#include "lists.h"

/**
 * _re - allocate mem for arr of ptrs
 * @list: old list input to be added to it
 * @size: size of new list
 * @head: address of the node that will be added
 * Return: ptr to the new list
 */
const listint_t **_re(const listint_t **list, size_t size,
		const listint_t *head)
{
	const listint_t **newl;
	size_t i;

	newl = malloc(size * sizeof(listint_t *));
	if (newl == NULL)
	{
		free(list);
		exit(98);
	}
	for (i = 0; i < size - 1; i++)
		newl[i] = list[i];
	newl[i] = head;
	free(list);
	return (newl);
}
/**
 * print_listint_safe - print a linked list safely
 * @head: pointer to first node
 * Return: number of printed values
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t i, count = 0;
	const listint_t **list = NULL;

	if (!head)
		exit(98);
	while (head)
	{
		for (i = 0; i < count; i++)
		{
			if (head == list[i])
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
		}
		count++;
		list = _re(list, count, head);
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	free(list);
	return (count);
}
