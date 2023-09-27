#include "main.h"
/**
 * _print_rev_recursion - Functio to print string in reverse
 * @s: Pointer to a String to be printed
 * Code by Linus Obura
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
