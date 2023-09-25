#include "main.h"
/**
 * _strspn - function to get length of a prefix substring
 * @s: the pointer to string s
 * @accept: bytes to be checked in s
 * Return: number of bytes in initial segment of s
 * which consist only of bytes from accept
 * Code by Linus Obura
 */

unsigned int _strspn(char *s, char *accept)
{
	int count = 0;
	char *initial_accept = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*s == *accept)
			{
				count++;
				break;
			}
			accept++;
		}
		if (!*accept)
		{
			return (count);
		}
		s++;
		accept = initial_accept;
	}
	return (count);
}
