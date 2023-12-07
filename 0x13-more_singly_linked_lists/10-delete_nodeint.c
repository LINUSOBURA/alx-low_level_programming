#include "lists.h"
/**
* delete_nodeint_at_index - function to delete a node at an index
* @head: pointer to a pointer to the first node of the list
* @index: index of the node to be deleted
* Return: 1 0r -1
* Code by Linus Obura
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *temp;

	if (!head || !*head)
	{
		return (-1);
	}

	current = *head;

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	for (i = 0; i < index - 1 && current != NULL; i++)
	{
		current = current->next;
	}

	if (!current || !current->next)
	{
		return (-1);
	}

	temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
