#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
* argstostr - function to concatenate all arguments into a string
* @ac: arguments length
* @av: arguments pointer
* Return: concatenated string
* Code by Linus Obura
*/
char *argstostr(int ac, char **av)
{
	int i, j, length = 0, position = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		length += strlen(av[i] + 1;
	}

	str = malloc(length + 1);

	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++, position++)
		{
			str[position] = av[i][j];
		}
		str[position++] = '\n';
	}
	str[position] = '\0';

	return (str);
}
