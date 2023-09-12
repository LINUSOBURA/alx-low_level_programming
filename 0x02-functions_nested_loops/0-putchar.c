#include "main.h"
/**
 * main - Entry point of the program
 * Return: (0) sucess
 */
int main(void)
{
	char str[] = "_putcar\n";

	for (int i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (0);
}
