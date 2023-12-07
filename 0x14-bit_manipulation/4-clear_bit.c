#include "main.h"
#include <limits.h>
/**
 * clear_bit - function to set a bit at given index to 0
 * @n: pointer to an integer
 * @index: index starting from 0 of the bit you want to set
 * Return: 1 success -1 error
 * Code by Linus Obura
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	mask = ~(1UL << index);
	*n &= mask;

	return (1);
}
