#include "lists.h"
/**
 * get_dnodeint_at_index - function to get node at index
 * @head: head pointer of the list
 * @index: index of the node
 * Return: node at the index
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int currentindex = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (current != NULL && currentindex < index)
	{
		current = current->next;
		currentindex++;
	}

	return ((currentindex == index) ? current : NULL);


}
