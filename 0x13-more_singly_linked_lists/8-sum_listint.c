#include "lists.h"
/**
* sum_listint - function to sum up all data in the list
* @head: pointer to the first node in the list
* Return: sum
* Code by Linus Obura
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current = head;

	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
