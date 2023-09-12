#include "main.h"
/**
 * _isalpha - checks for alphanumeric
 * @c: parameter in ASCII
 * Return: 1 success 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 48 && c <= 56) || (c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
