#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index in a list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to delete.
 *
 * Return: 1 if successful, -1 if failed.
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	unsigned int currentindex = 0;

	if (head == NULL || *head == NULL)
	{
		return (-1);
	}

	while (current != NULL && currentindex < index)
	{
		current = current->next;
		currentindex++;
	}

	if (current == NULL)
	{
		return (-1);
	}

	if (current->prev != NULL)
	{
		current->prev->next = current->next;
	}
	else
	{
		*head = current->next;
	}

	if (current->next != NULL)
	{
		current->next->prev = current->prev;
	}

	free(current);

	return (1);
}
