#include "lists.h"
/**
 * print_listint - function to count the number of nodes
 * @h: Pointer to the first node on the list
 * Return: number of nodes
 * Code by Linus Obura
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	if (h == NULL)
	{
		return (0);
	}

	ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		count++;
		ptr = ptr->next;
	}
	return (count);
}
