#include "lists.h"
/**
 * create_node - Creates a new doubly linked list node.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */
dlistint_t *create_node(int n)
{
	dlistint_t *newnode = (dlistint_t *)malloc(sizeof(dlistint_t));

	if (newnode == NULL)
	{
		return (NULL);
	}

	newnode->n = n;
	newnode->next = NULL;
	newnode->prev = NULL;

	return (newnode);
}

/**
 * get_node_at_index - Retrieves the node at a given index in a list.
 * @head: A pointer to the head of the doubly linked list.
 * @index: The index of the node to retrieve.
 *
 * Return: A pointer to the node at the specified index, or NULL if not found.
 */
dlistint_t *get_node_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int currentindex = 0;

	while (current != NULL && currentindex < index)
	{
		current = current->next;
		currentindex++;
	}

	return (current);
}

/**
 * insert_dnodeint_at_index - Inserts a new node at a given index in  list.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: A pointer to the newly created node, or NULL on failure.
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *newnode = create_node(n);

	if (*h == NULL)
	{
		*h = newnode;
	}
	else
	{
		dlistint_t *current = get_node_at_index(*h, idx);

		if (current != NULL)
		{
			newnode->next = current;
			newnode->prev = current->prev;

			if (current->prev != NULL)
			{
				current->prev->next = newnode;
			}
			else
			{
				*h = newnode;
			}
		}
		else
		{
			dlistint_t *lastnode = *h;

			while (lastnode->next != NULL)
			{
				lastnode = lastnode->next;
			}

			lastnode->next = newnode;
			newnode->prev = lastnode;
		}
	}

	return (newnode);
}
