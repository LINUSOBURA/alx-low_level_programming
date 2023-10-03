#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to 2D array
 * @width: grid width
 * @height: grid height
 * Return: Null or pointer
 * Code by Linus Obura
 */
int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
	{
		return (0);
	}

	arr = (int **) malloc(height * sizeof(int *));
	if (arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *) malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(arr[j]);
			free(arr);
			return (NULL);
		}
	}

	return (arr);
}
