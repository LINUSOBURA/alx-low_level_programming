#include "main.h"
/**
 * prime_helper - function to help find prime number
 * @n: integer to be checked
 * @i: integer to ckeck
 * Return: 1 for prime 0 otherwise
 * Code by Linus Obura
 */
int prime_helper(int n, int i)
{
	if (i * i > n)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (prime_helper(n, i + 2));
}
/**
 * is_prime_number - function to return prime
 * @n: integer to be ckecked
 * Return: 1 prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	if (n == 2)
	{
		return (1);
	}
	if (n % 2 == 0)
	{
		return (0);
	}
	return (prime_helper(n, 3));
}
