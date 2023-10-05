#include "main.h"
#include <stdlib.h>
/**
 * _realloc - Function to reallocate a block of code
 * @ptr: memmory block to be allocated
 * @old_size: old memmory size
 * @new_size: new memmory size
 * Return: pointer to new memmory
 * Code by Linus Obura
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr = ptr;
	unsigned int i, min_size;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (!ptr)
	{
		malloc(new_size);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (!new_ptr)
	{
		return (NULL);
	}

	min_size = old_size < new_size ? old_size : new_size;

	for (i = 0; i < min_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
