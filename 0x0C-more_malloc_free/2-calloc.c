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
	void *allocate;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	allocate = malloc(size * nmemb);

	if (allocate == NULL)
	{
		return (NULL);
	}

	return (allocate);
}
