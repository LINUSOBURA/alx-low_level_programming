#include "main.h"
/**
 * _isupper - Checks if the character is upper case
 * @c: Character to be checked
 * Return: 1 for uppercase 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
