#include "lists.h"
/**
 * free_listint2 - function to freea list and set head to NULL
 * @head: pointer to the first node in the list
 * Code by Linus Obura
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (!head || !*head)
	{
		return;
	}

	while (*head != NULL)
	{
		temp = *head;
		*head = (*head)->next;
		free(temp);
	}

	*head = NULL;
}
