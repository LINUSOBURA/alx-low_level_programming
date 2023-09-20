#include "main.h"
/**
 * _strncat - string to concatinate two characters
 * @dest: first string
 * @src: second string
 * @n: number of bytes to be used
 * Return: dest
 * code by Linus Obura
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0;
	int i;

	for (i = 0; dest[i] != '\0'; i++)
		dest_len++;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		dest[dest_len + i] = *src;
		src++;
	}

	dest[dest_len + i] = '\0';

	return (dest);

}
