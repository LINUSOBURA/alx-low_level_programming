#include <stdio.h>
#include <stdlib.h>
/**
 * main -function to calculate change
 * @argc: arguments count
 * @argv: arguments string
 * Return: 0
 * Code by Linus Obura
 */

int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	int cents = atoi(argv[1]);
	
	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	
	int coins[] = {25, 10, 5, 2, 1};
	int num_coins = 0;
	
	for (int i = 0; i < 5 && cents > 0; i++)
	{
		while (cents >= coins[i])
		{
			cents -= coins[i];
			num_coins++;
		}
	}
	
	printf("%d\n", num_coins);
	return 0;
}

