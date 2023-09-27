#include "main.h"
/**
 * _puts_recursion - Funtion that prints a string
 * @s: string to be printed
 * Code by Linus Obura
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}

}
