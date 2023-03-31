#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @str: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	new = malloc(sizeof(list_t));
	if (!new)
	return (NULL);

	new->str = str;
	new->next = *head;
	*head = new;
	return (new);
}
