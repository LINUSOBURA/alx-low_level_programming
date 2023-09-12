#include "main.h"
/**
 * _isalpha - checks for alphanumeric
 * @c: parameter in ASCII
 * Return: 1 success 0 otherwise
 */
int _isalpha(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
