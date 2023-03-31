#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list_t list
 * @head: start of node
 * @str: string to be added
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int length = 0;
	list_t *temp, *current;

	temp = malloc(sizeof(list_t));
	current = malloc(sizeof(list_t));
	if (temp == NULL)
	{
		return (NULL);
	}

	while (str[length])
	{
		length++;
	}

	temp->str = strdup(str);
	temp->len = length;
	temp->next = NULL;
	current = (*head);

	if (current == NULL)
	{
		*head = temp;
	}
	else
	{
		while (current->next != NULL)
		{
			current = current->next;
		}
		current->next = temp;
	}
	return (temp);
}
