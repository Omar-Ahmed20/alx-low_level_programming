#include "lists.h"

/**
 * insert_nodeint_at_index - insert node at given index
 * @head: pointer to the first node
 * @idx: index to added new node at
 * @n: value of new node
 * Return: new adress of new node or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *temp, *tt;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !*head || !new)
		return (NULL);
	temp = *head;
	while (i < (idx - 1))
	{
		if (!temp)
			return (NULL);
		temp = temp->next;
		i++;
	}
	tt = temp->next;
	new->n = n;
	temp->next = new;
	new->next = tt;
	return (new);
}
