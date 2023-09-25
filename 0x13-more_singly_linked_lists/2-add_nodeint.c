#include "lists.h"

/**
 * add_nodeint - add node at the beg. of linked list
 * @head: head pointer to linked list
 * @n: value of node to be added
 * Return: address of new node or NULL
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;
	return (new);
}
