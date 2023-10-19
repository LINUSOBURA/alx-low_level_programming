#include "lists.h"
/**
 * free_list - function to free a linked list
 * @head: pointer to the beggining of a list
 * Code by Linus Obura
 */
void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head;
		head = head->next;

		free(temp->str);
		free(temp);
	}
}
