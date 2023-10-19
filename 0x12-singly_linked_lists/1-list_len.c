#include "lists.h"
/**
 * list_len - function to return length of a list
 * @h: pointer to least head
 * Return: list lenth
 * Code by Linus Obura
 */
size_t list_len(const list_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		nodes++;
		h = h->next;
	}
	return (nodes);
}
