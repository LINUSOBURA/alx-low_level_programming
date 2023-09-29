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
	int i, add = 0;

	if (argc < 2)
	{
		printf("0\n");
	}

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]) == 0 && argv[i][0] != '0')
		{
			printf("Error\n");
			return (1);
		}
		else
			add = add + atoi(argv[i]);

	}
	printf("%d\n", add);
	return (0);
}
