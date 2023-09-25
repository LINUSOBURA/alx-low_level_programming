#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function to print sunm of two diagonals
 * @a: pointer to array
 * @size: size of array
 * Code by Linus Obura
 */
void print_diagsums(int *a, int size)
{
	int i, j, sum1 = 0, sum2 = 0, h, l = 0;

	h = size - 1;
	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (i == j)
				sum1 += a[l];
			if (j == h)
				sum2 += a[l];
			l++;
		}
		h--;
	}
	printf("%i, %i\n", sum1, sum2);
}
