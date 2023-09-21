#include "main.h"
/**
 * string_toupper - Function to convert lowwercase letters to uppercase
 * Return: 0
 * @str: string of characters to be checked
 * Code by Linus Obura
 */
char *string_toupper(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
	}
	return (str);
}
