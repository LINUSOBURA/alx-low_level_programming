#include "lists.h"
/**
 * sum_dlistint - function to sum all values in a list
 * @head: head pointer of the list
 * Return: sum of all values in list
*/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *temp = head;
	int sum = 0;

	while (temp != NULL)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);

}
