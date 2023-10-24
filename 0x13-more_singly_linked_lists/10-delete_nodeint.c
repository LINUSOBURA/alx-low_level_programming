#include "lists.h"
/**
* delete_node_at_index - function to delete a node at an index
* @head: pointer to a pointer to the first node of the list
* @index: index of the node to be deleted
* Code by Linus Obura
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current = *head;

	if (!head || !*head)
	{
		return (-1);
	}

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

	listint_t *temp = current->next;
	current->next = temp->next;
	free(temp);

	return (1);
}
