#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * print_numbers - prints numbers followed by a new line
 * @separator: separator for numbers
 * @n: number of ints passed to function
 * Code by Linus Obura
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list param;
	unsigned int value;

	va_start(param, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(param, unsigned int);

		printf("%d", value);

		if (i != n - 1 && separator != NULL)
			printf("%c", *separator);
	}

	printf("\n");

	va_end(param);
}
