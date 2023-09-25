#include "main.h"
#define NULL ((void *)0)
/**
 * _strchr - function to search for character occurence in a string
 * @s: the pointer to the string
 * @c: the character to be checked
 * Return: address of the character if found
 * Code by Linus Obura
 */
char *_strchr(char *s, char c)
{
	
	for (; *s != '\0'; s++)
	{
		if (*s == c)
		{
			return (s);
		}
	}
	return (NULL);

}
