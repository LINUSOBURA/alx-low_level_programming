#include "lists.h"
/**
 * add_node_end - function to add nodes to the end pf a list
 * @head: pointer to start of the list
 * @str: pointer to the strings added to the list
 * Return: new node
 * Code by Linus Obura
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (newNode == NULL)
	{
		return (NULL);
	}

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(str);
	newNode->next = NULL;

	if (*head == NULL)
	{
		*head = newNode;
	}
	else
	{
		list_t *temp = *head;

		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	}

	return (newNode);
}
