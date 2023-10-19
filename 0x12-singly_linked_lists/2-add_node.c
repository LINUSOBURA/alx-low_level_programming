#include "lists.h"
list_t *add_node(list_t **head, const char *str)
{
	list_t *newNode = createNewNode(str);
	if (newNode == NULL)
		return (NULL);
	
	newNode->next = *head;
	*head = newNode;
	return (newNode);
}

list_t *createNewNode(char *)
{
	list_t *newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);
	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (newNode);
	}

	newNode->len =strlen(str);
	newNode->next = NULL;
	return newNode;
}
