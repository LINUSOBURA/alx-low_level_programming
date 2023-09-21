#include "main.h"
/**
 * leet - function to change characters to numbers
 * @str: string of characters
 * Return: leetstr
 * Code by Linus Obura
 */
char *leet(char *str)
{
	char from[] = "aeotlAEOTL";
	char to[] = "4307143071";
	int i = 0;
	int j;

	while (*(str + i) != '\0')
	{
		for (j = 0; j <= 9; j++)
		{
			if (*(str + i) == from[j])
			{
				*(str + i) = to[j];
			}
		}
		i++;
	}
	return (str);
}
