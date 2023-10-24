#include "lists.h"
/**
* get_nodeint_at_index - function to get the value at index nth index
* @head: the first node of the list
* @index: the index of the value to be returned
* Return: calue at nth index
* Code by Linus Obura
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *current = head;
	unsigned int i = 0;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
