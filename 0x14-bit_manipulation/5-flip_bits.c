#include "main.h"
/**
 * flip_bits - function to determine the number of bits to flip to
 * get from one number to another
 * @n: integer
 * @m: second integer
 * Return: number of bits
 * Code by Linus Obura
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int count = 0;

	while (diff)
	{
		count += diff & 1;
		diff >>= 1;
	}

	return (count);
}
