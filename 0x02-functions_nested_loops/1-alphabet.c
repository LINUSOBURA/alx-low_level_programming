#include "main.h"
/**
 * main - Entry of the code
 * Return: 0 sucess
 */
int main(void)
{
	char str[] = "abcdefghijklmnopqrstuvwxyz\n";
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar (str[i]);
	}
	return (0);
}
