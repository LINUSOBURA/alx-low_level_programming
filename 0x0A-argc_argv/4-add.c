#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - entry point of the funtion
 * is_positive - function to check if number is positive
 * @str: sting characters
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */
int is_positive(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (!isdigit(str[i]))
		{
			return (0);
		}
	}
	return (1);
}

/**
 * main - entry point of the funtion
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		if (!is_positive(argv[i]))
		{
			printf("Error\n");
			return (1);
		}
		else
			add += atoi(argv[i]);
	}

	printf("%d\n", add);
	return (0);
}

