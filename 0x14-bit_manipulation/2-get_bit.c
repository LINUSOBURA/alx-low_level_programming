#include "main.h"
/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: the value whose index is checked
 * @index: index starting from 0 of the bit needed
 * Return: value of the bit at index or -1 for error
 * Code by Linus Obura
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
	{
		return (-1);
	}
	return ((n >> index) & 1);
}
