#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main - entry of the code
 * @argc: arguments count
 * @argv: argument strings
 * Return: 0
 * Code by Linus Obura
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*operation)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	operation = get_op_func(argv[2]);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*(argv[2]) == '/' || *(argv[2]) == '%') && b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	result = operation(a, b);
	printf("%d\n", result);

	return (0);
}

