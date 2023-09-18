#include "main.h"
/**
 * _strlen - returns length of a string
 * @s: pointer to string value
 * Return: length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}
