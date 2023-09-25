#include "main.h"
/**
 * _memset - Function to set constant byte in memmory
 * @s: pointr to the block of memmory that needs to be set
 * @b: byte to be set in memmory
 * @n: number of bytes to be set
 * Return: pointer to memory area s
 * Code by Linus Obura
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i <= n; i++)
	{
		s[i] = b;
	}

	return (s);
}
