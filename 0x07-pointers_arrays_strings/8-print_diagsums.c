#include "main.h"
/**
 * print_diagsum - function to print sunm of two diagonals
 * @a: pointer to array
 * size: size of aaray
 * Code by Linus Obura 
 */
void print_diagsums(int *a, int size)
{
	int main_diagonal_sum = 0;
	int secondary_diagonal_sum = 0;
	
	for (int i = 0; i < size; i++)
	{
		main_diagonal_sum += *(a + i * size + i);
		secondary_diagonal_sum += *(a + i * size + (size - i - 1));
	}
	print_integer(main_diagonal_sum);
	_putchar(',');
	_putchar(' ');
	_print_integer(secondary_diagonal_sum);
	_putchar('\n');
}
