#include <stdio.h>
/**
 * main - entry point of the funtion
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
