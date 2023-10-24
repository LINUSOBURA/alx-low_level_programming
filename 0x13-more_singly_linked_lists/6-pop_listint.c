#include "lists.h"
/**
 * pop_listint - function to delete the head node of a list
 * @head: a pointer to the pointer of the first element of the list
 * Return: head node's data
 * code by Linus Obura
 */
int pop_listint(listint_t **head)
{
	int retval;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		listint_t *temp = *head;
		retval = temp->n;
		*head = (*head)->next;
		free(temp);
	}
	return (retval);
}
