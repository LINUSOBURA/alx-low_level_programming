#include "main.h"
/**
 * print_alphabet_x10 - main function
 */
void print_alphabet_x10(void)
{
	int l = 0;
	int i;

	while (l <= 9)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		l++;
	}
}
