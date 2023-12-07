#include "lists.h"
/**
 * add_dnodeint_end - function to add new node at the end of a list
 * @head: pointer to the head pointer
 * @n: value of the new node
 * Return: new node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	if (*head == NULL)
	{
		*head = newnode;
	}
	else
	{
		dlistint_t *current = *head;

		while (current->next != NULL)
		{
			current = current->next;
		}

		newnode->prev = current;
		current->next = newnode;
	}

	return (newnode);
}
