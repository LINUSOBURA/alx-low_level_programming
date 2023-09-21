#include "main.h"
/**
 * reverse_array - function to reverse an array
 * @a: the array to be reversed
 * @n: number of elements i the array
 * Return: nothing
 * Code by Linus Obura
 */

void reverse_array(int *a, int n)
{
	int i;
	int temp;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
