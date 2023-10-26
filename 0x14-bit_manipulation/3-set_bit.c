#include "main.h"
#include <limits.h>
/**
 * set_bit - function to set valueof a bit to 1 at a given index
 * @n: pointer to a integer
 * @index: index starting from 0 of the bit to be set
 * Return: 1 success -1 error
 * Code by Linus Obura
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index >= sizeof(unsigned long int) * CHAR_BIT)
	{
		return (-1);
	}

	mask = 1UL << index;
	*n |= mask;
	return (1);
}
