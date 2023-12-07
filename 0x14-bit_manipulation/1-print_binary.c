#include "main.h"
/**
 * print_binary - function to print a binary from an int
 * @n: integer
 * Code by Linus Obura
 */
void print_binary(unsigned long int n)
{
	int msb_pos;

	if (n == 0)
	{
		_putchar('0');
		return;
	}

	msb_pos = sizeof(n) * 8 - 1;

	while (!((n >> msb_pos) & 1) && msb_pos >= 0)
	{
		msb_pos--;
	}

	for (; msb_pos >= 0; msb_pos--)
	{
		if ((n >> msb_pos) & 1)
		{
			_putchar('1');
		}
		else
		{
			_putchar('0');
		}
	}
}
