#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * leet - function to change characters to numbers
 * @str: string of characters
 * Return: leetstr
 * Code by Linus Obura
 */
char *leet(char *str)
{
	int i, j;
	char *leet_str = malloc(strlen(str) + 1);

	for (i = 0, j = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 'a' || str[i] == 'A' || str[i] == 'e' ||
				str[i] == 'E' || str[i] == 'o' || str[i] == 'O'
				|| str[i] == 't' || str[i] == 'T' ||
				str[i] == 'l' || str[i] == 'L')
		{
			leet_str[j++] = str[i] - 'a' + '4';
		}
		else
		{
			leet_str[j++] = str[i];
		}
	}
	leet_str[j] = '\0';
	return (leet_str);
}
