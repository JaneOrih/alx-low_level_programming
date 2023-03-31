#include "lists.h"
#include <stdlib.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: parameter
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	if (h->str == NULL)
	{
		printf("[0] (nil)\n");
	}
	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		count++;
		h = h->next;

	}
	return (count);
}
