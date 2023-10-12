#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * print_strings - funtion to print strings passed to a function
 * @separator: separator for strings
 * @n: number of strings passed
 * Code by Linus Obura
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list params;
	const char *value;

	va_start(params, n);

	for (i = 0; i < n; i++)
	{
		value = va_arg(params, const char *);
		if (value == NULL)
		{
			value = "(nil)";
		}

		printf("%s", value);

		if (i != n - 1 && separator != NULL)
		{
			printf("%s ", separator);
		}
	}

	printf("\n");

	va_end(params);
}
