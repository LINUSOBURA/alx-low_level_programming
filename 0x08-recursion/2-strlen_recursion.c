#include "main.h"
/**
 * _strlen_recursion - Function to retun the lenth of a string
 * @s: Pointer to a string to be returned
 * Return: Length of a string
 * Code by Linus Obura
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
