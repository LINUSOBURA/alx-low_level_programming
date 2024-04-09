#include "search_algos.h"
/**
 * binary_search - searches for a value in an array of integers
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located
 * Code by Linus Obura
*/

int binary_search(int *array, size_t size, int value)
{
	/*size_t left = 0, right = size - 1;*/
	int middle, left = 0, right = size - 1;

	if (array == NULL)
	{
		return (-1);
	}

	while (left <= right)
	{
		printf("Searching in array: ");
		for (middle = left; middle <= right; middle++)
		{
			printf("%d", array[middle]);
			if (middle < right)
			{
				printf(", ");
			}
		}
		printf("\n");

		middle = (left + right) / 2;
		if (middle == value)
		{
			return (middle);
		}
		if (middle > value)
		{
			right = middle - 1;
			middle = (left + right) / 2;
		}
		else
		{
			left = middle + 1;
			middle = (left + right) / 2;
		}
	}
	return (-1);
}
