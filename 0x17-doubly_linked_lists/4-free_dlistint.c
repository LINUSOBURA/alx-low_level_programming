#include "lists.h"
/**
 * free_dlistint - function to free a doubly linked list
 * @head: head pointer to the beggining of the list
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	dlistint_t *nextnode;

	while (current != NULL)
	{
		nextnode = current->next;
		free(current);
		current = nextnode;
	}

	head = NULL;
}
