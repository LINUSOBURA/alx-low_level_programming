#include "function_pointers.h"
/**
 * array_iterator - function that execute a function given a parameter
* @array: array of pointer function
* @size: size of the array
* @action: pointer to a function
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}

