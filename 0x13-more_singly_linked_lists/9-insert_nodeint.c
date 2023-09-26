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
	listint_t *temp;
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp)
	{
		if (i == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		temp = temp->next;
		i++;
	}
	free(new);
	return (NULL);
}
