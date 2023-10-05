#include <stdlib.h>
#include "main.h"
#include <stdlib.h>

int digit(char *str);
void _puts(char *str);
void print_num(int n);
/**
 * main - function to perform multiplication
 * @argc: argument count
 * @argv: array of arguments
 * Return: multiplied numbers
 * Code by Linus Obura
 */
int main(int argc, char *argv[])
{
	int num1, num2, results;

	if (argc != 3)
	{
		_puts("Error\n");
		exit(98);
	}

	if (!digit(argv[1]) || !digit(argv[2]))
	{
		_puts("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);

	results = num1 * num2;

	print_num(results);
	_putchar('\n');

	return (0);
}

/**
 * digit - function to check if number is a digit
 * @str: pointer to a string
 * Return: 1 or 0
 */

int digit(char *str)
{
	while (*str)
	{
		if (*str < '0' || *str > '9')
		{
			return (0);
		}
		str++;
	}

	return (1);
}

/**
 * _puts - function to print string
 * @str: string pointer
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
}

/**
 * print_num - prints a number
 * @n: integer
 */
void print_num(int n)
{
	if (n == 0)
	{
		_putchar('0');
	}
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
		print_num(n / 10);
	_putchar((n % 10) + '0');
}
