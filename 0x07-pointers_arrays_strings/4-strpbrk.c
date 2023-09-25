#include "main.h"
/**
 * _strbrk - string that searches a string for any set of bytes
 * @s: strig to be searched upon
 * @accept: string to be searched
 * Return: pointer to the byte in s that is in accept
 * Code by Linus Obura
 */
char *_strpbrk(char *s, char *accept)
{
	char *temporary_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
			{
				return (s);
			}
		}
		accept = temporary_accept;
		s++;
	}
	return (s);
}
