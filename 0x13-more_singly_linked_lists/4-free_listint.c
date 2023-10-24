#include "lists.h"
/**
 * free_listint - function to free a list
 * @head: pointer to the first node of the list
 * Code by Linus Obura
 */
void free_listint(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
