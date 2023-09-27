#include "main.h"
/**
 * helper - function to help find the square root
 *
 * _sqrt_recursion - function to return square root of a number
 * @n: integer for square root
 * @g: helper integer
 *
 * Return: square root
 * Code by Linus Obura
 */
int helper(int n, int g);

int helper(int n, int g)
{
	if (g * g == n)
	{
		return (g);
	}
	else if (g * g > n)
	{
		return (-1);
	}
	else
	{
		return (helper(n, g + 1));
	}
}
/**
 * _sqrt_recursion - function to return square root of a number
 * @n: integer for square root
 * Return: Square root
 */
int _sqrt_recursion(int n)
{
	return (helper(n, 1));

}
