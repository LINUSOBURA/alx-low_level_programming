#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: The minimum integer
 * @max: The maximum integer
 * Return: pointer to new array
 * Code by Linus Obura
 */
int *array_range(int min, int max)
{
	int *arr_int, i, j = 0, arr_len;

	if (min > max)
	{
		return (NULL);
	}

	arr_len = max - min + 1;

	arr_int = malloc(arr_len * sizeof(int));

	if (!arr_int)
	{
		return (NULL);
	}

	for (i = min; i <= max; i++)
	{
		arr_int[j++] = i;
	}

	return (arr_int);
}
