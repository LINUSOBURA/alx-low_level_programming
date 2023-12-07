#include "lists.h"
/**
 * add_nodeint_end - function to add a node at the end of a list
 * @head: pointer to the first node of the list
 * @n: the integer to be added to the list
 * Return: address of the new node
 * Code by Linus Obura
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr, *temp;

	ptr = *head;

	temp = malloc(sizeof(listint_t));

	if (!temp)
	{
		return (NULL);
	}

	temp->n = n;
	temp->next = NULL;

	if (*head == NULL)
	{
		*head = temp;
		return (temp);
	}

	ptr = *head;

	while (ptr->next != NULL)
	{
		ptr = ptr->next;
	}

	ptr->next = temp;

	return (ptr);
}
