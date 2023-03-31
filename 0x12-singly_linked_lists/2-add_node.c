#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @str: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	unsigned int len = 0;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}
	while (str[len])
	{
		len++;
	}

	temp->str = strdup(str);
	temp->len = len;
	temp->next = *head;
	(*head) = temp;
	return (temp);
}
