#include "lists.h"

/**
 * print_list - function to print elements of a list_t
 * @h: head od the list
 * Retun: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}

		nodes++;
		h = h->next;
	}

	return (nodes);
}
