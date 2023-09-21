#include "main.h"
#include <stdbool.h>
/**
 * cap_string - function to capitalize every first word
 * @str: string to be checked
 * Return: str
 * Code by Linus Obura
 */

char *cap_string(char *str)
{
	bool word_start = true;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (word_start && str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 32;
		}
		word_start = (str[i] == ' ' || str[i] == '\t' || str[i] == '\n'
				|| str[i] == ',' || str[i] == ';'
				|| str[i] == '.' || str[i] == '!'
				|| str[i] == '?' || str[i] == '"'
				|| str[i] == '(' || str[i] == ')'
				|| str[i] == '{' || str[i] == '}');
	}
	return (str);
}
