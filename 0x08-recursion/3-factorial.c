#include "main.h"
/**
 * factorial - function to calculate factorial of a number
 * @n: number for factorial
 * Return: -1 for error
 * Code by Linus Obura
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
