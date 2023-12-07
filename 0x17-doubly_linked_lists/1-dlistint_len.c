#include "lists.h"
/**
 * dlistint_len - function to return the length of a list
 * @h: head pointer of the list
 * Return: number of elements in a list
*/
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *temp = h;
	int count = 0;

	while (temp != NULL)
	{
		count += 1;
		temp = temp->next;
	}

	return (count);
}
