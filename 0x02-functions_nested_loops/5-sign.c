#include "main.h"
/**
 * print_sign - Entry point of our code
 * @n: number to be checked
 * Return: 0 if zero 1 if + -1 if -
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+')
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (-1);
	}
}
