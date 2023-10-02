#include "main.h"
#include <stdlib.h>
/**
 * create_array- function to create an array
 * @size: size of the aaray
 * @c: array character
 * Return: pointer to array or null
 * code bu Linus Obura
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *arr = (char *) malloc(size * sizeof(char));

	if (arr != NULL)
	{
		if (size == 0)
			return (NULL);

		for (i = 0; i < size; i++)
			arr[i] = c;
	}
	return (arr);
}
