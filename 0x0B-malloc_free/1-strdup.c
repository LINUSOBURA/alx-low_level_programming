#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup- Function to return a pointer to duplicate string
 * @str: pointer to a string to be duplicated
 * Return: Null or pointer to duplicated string
 * Code by Linus Obura
 */
char *_strdup(char *str)
{
	size_t length = strlen(str) + 1;

	if (str == NULL)
		return (NULL);

	char *New_string = (char *) malloc(length * sizeof(char));

	if (New_string != NULL)
		strcpy(New_string, str);

	if (New_string == NULL)
		return (NULL);
	return (New_string);

}
