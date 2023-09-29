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
	(void)argv;

	argc = argc - 1;
	printf("%d\n", argc);
	return (0);
}
