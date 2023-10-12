#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - function that prints anything
 * @format: list of type of arguments
 * Code by Linus Obura
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	va_list params;
	char *separator = "";

	va_start(params, format);

	while (format[i])
	{
		printf("%s", separator);
		switch (format[i++])
		{
			case 'c':
				printf("%c", (char)va_arg(params, int));
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(params, double));
				break;
			case 's':
				if (!va_arg(params, char *))
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(params, char *));
				break;
		}
		separator = ", ";
	}
	va_end(params);
	printf("\n");
}
