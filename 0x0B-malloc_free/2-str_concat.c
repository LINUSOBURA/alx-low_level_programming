#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function to concatinate two strings
 * @s1: first string
 * @s2: second string
 * Return: Pointer to concatinated string
 * Code by Linus Obura
 */
char *str_concat(char *s1, char *s2)
{
	size_t length1 = 0, length2 = 0;
	char *new_string;

	if (s1)
		length1 = strlen(s1);
	if (s2)
		length2 = strlen(s2);
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	new_string = (char *) malloc(length1 + length2 + 1);

	if (!new_string)
		return (NULL);

	if (s1)
		strcpy(new_string, s1);
	if (s1)
		strcpy(new_string + length1, s2);

	return (new_string);


}
