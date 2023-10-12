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
	unsigned int i = 0, comma = 0;
	va_list params;

	va_start(params, format);

	while (format[i])
	{
		if (comma && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
			printf(", ");

		switch (format[i++])
		{
			case 'c': printf("%c", (char)va_arg(params, int));
				comma = 1;
				break;
			case 'i': printf("%d", va_arg(params, int));
				comma = 1;
				break;
			case 'f': printf("%f", (float)va_arg(params, double));
				comma = 1;
				break;
			case 's':
				if (!va_arg(params, char *))
				{
					printf("(nil)");
					break;
				}
				printf("%s", va_arg(params, char *));
				comma = 1;
				break;
			default:
				comma = 0;
				break;
		}
	}
	va_end(params);
	printf("\n");
}
