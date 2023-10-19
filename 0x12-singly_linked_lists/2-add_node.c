#include "lists.h"
/**
* add_node - function to add a new node to the list
* @head: start of the string
* @str: string
* Return: newnode
* Code by Linus Obura
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));

	if (!newNode)
		return (NULL);

	newNode->str = strdup(str);
	if (!newNode->str)
	{
		free(newNode);
		return (NULL);
	}
	newNode->len = strlen(str);
	newNode->next = *head;

	*head = newNode;
	return (newNode);
}
