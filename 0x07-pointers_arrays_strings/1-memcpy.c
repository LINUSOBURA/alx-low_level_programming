#include "main.h"
/**
 * _memcpy - Function to copy bytes from one memory to the next
 * @dest: destination of copied memmory bytes
 * @src: memory area from which bytes are copied
 * @n: number of bytes to be copied
 * Return: pointer to memory area dest
 * Code by Linus Obura
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		*(dest + i) = *(src + i);

	return (dest);
}

