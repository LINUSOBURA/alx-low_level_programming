#include "main.h"
/**
 * print_last_digit - last digit of a number
 * @i: number to be checked
 * Return: 0 sucess
 */
int print_last_digit(int i)
{
	int l;

	l = i % 10;
	if (l < 0)
{
	_putchar (-l + 0);
	return (-l);
}

	else
{
	_putchar (l + 0);
	return (l);
}
}
