#include "lists.h"
/**
 * add_dnodeint - function to add new node at the beggining of a list
 * @head: pointer to the head pointer
 * @n: value of the new node
 * Return: new node
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = (dlistint_t *)malloc(sizeof(dlistint_t));

	temp->n = n;
	temp->next = NULL;
	temp->prev = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (NULL);
	}
	temp->next = *head;
	(*head)->prev = temp;
	*head = temp;

	return (temp);
}
