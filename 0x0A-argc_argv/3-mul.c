#include <stdio.h>
#include <stdlib.h>
/**
 * main - entry point of the funtion
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */
int main(int argc, char *argv[])
{
	int mul, a, b;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	mul = a * b;
	printf("%d\n", mul);

	return (0);

}
