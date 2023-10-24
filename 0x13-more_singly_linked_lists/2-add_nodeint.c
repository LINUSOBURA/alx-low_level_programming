#include "lists.h"
/**
 * add_nodeint - function to add a new node at the beginning of a list
 * @head: pointer to the first element of the list
 * @n: data to be added to the list
 * Return: pointer to head
 * Code by Linus Obura
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		return (NULL);
	}

	ptr->n = n;
	ptr->next = NULL;

	ptr->next = *head;
	*head = ptr;
	return (*head);
}
