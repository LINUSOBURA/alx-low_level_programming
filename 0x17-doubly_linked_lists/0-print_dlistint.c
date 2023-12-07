#include "lists.h"
/**
 * print_dlistint -  function to print values of a doubly linked list
 * @h: head of the list
 * Return: count of list nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		printf("%d", temp->n);
		printf("\n");
		count += 1;
		temp = temp->next;
	}

	return (count);
}
