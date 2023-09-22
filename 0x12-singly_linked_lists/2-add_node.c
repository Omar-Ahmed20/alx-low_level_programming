#include "lists.h"
#include <string.h>
/**
 * _strlen - count length of a string
 * @s: input string
 * Return: length of string
 */
int _strlen(const char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	return (i);
}
/**
 * add_node - add node at the beginning of the linked list
 * @head: head of the list
 * @str: str of the node
 * Return: adrress of new node
 */

list_t *add_node(list_t **head, const char *str)
{
	struct list_s *temp = malloc(sizeof(list_t));

	if (!head || !str || !temp)
		return (NULL);
	temp->len = _strlen(str);
	temp->str = strdup(str);
	temp->next = *head;
	*head = temp;

	return (*head);
}
