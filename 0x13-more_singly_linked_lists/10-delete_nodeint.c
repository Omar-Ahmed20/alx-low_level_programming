#include "lists.h"

/**
 * delete_nodeint_at_index - delete node at given index
 * @head: pointer to the first node
 * @index: index of node to be deleted
 * Return: 1 if success -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp, *t;

	if (!head || !*head)
		return (-1);
	if (!index)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	temp = *head;
	while (temp)
	{
		if (i == index)
		{
			t->next = temp->next;
			free(temp);
			return (1);
		}
		t = temp;
		temp = temp->next;
		i++;
	}
	return (-1);
}
