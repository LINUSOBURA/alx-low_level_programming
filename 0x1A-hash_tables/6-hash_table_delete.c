#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table
 * @ht: The hash table to be deleted
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node, *next_node;

    /* Check if the hash table is NULL */
	if (ht == NULL)
		return;

    /* Iterate through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Iterate through the linked list at the current index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Save the next node before freeing the current one */
			next_node = current_node->next;

			/* Free the key and value */
			free(current_node->key);
			free(current_node->value);

			/* Free the current node */
			free(current_node);

			current_node = next_node;  /* Move to the next node in the list */
		}
	}

    /* Free the array of the hash table */
	free(ht->array);

    /* Free the hash table structure itself */
	free(ht);
}
