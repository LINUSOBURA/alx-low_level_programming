#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *current_node;
	int first = 1;  /* Flag to handle commas in the output */

    /* Check if the hash table is NULL */
	if (ht == NULL)
		return;

	printf("{");
    /* Iterate through the array of the hash table */
	for (i = 0; i < ht->size; i++)
	{
		/* Iterate through the linked list at the current index */
		current_node = ht->array[i];
		while (current_node != NULL)
		{
			/* Print a comma before each key/value pair (except the first one) */
			if (!first)
				printf(", ");
			printf("'%s': '%s'", current_node->key, current_node->value);

		first = 0;  /* Set the flag to false after printing the first pair */
		current_node = current_node->next;
		}
	}
	printf("}\n");
}
