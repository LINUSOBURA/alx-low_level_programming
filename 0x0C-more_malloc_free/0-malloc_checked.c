#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - Function that allocates memmory
 * @b: number of bytes of memmory to allocate
 * Return: Pointer to allocated memmory
 * Code by Linus Obura
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
