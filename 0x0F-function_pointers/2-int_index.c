#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - function that searches for an integer
 * @array: array of pointer function
 * @size: number of elements in the array
 * @cmp: function pointer
 * Code by Linus Obura
 * Return: integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}

	return (-1);
}
