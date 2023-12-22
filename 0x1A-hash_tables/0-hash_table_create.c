#include "hash_tables.h"

/**
 * hash_table_create - function to create  a hash table
 * @size: size of the hash table
 * Return: new table
 * Code by Linus Obura @ALX
*/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;
	unsigned long int i;

    /* Allocate memory for the hash table structure */
	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
	{
		return (NULL);
	}

    /* Allocate memory for the array of hash nodes */
	new_table->array = malloc(sizeof(hash_node_t *) * size);
	if (new_table->array == NULL)
	{
		free(new_table);  /* Clean up on failure */
		return (NULL);
	}

	new_table->size = size;

    /* Initialize each array element to NULL */
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}

	return (new_table);
}
