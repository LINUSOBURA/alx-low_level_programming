#include "main.h"
#include <stdlib.h>
/**
 * _calloc - Function to allocate memmory for an array
 * @nmemb: number of elements to allocate
 * @size: size of elements
 * Return: calloc
 * Code by Linus Obura
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *allocate;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocate = malloc(size * nmemb);

	for (i = 0; i < (size * nmemb); i++)
		allocate[i] = 0;

	if (allocate == NULL)
	{
		return (NULL);
	}

	return ((void *)allocate);
}
