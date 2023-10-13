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
				separator = ", ";
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				separator = ", ";
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				separator = ", ";
				break;
			case 's':
				{
					char *temp = va_arg(params, char *);
					if (!temp)
					{
						printf("(nil)");
					}
					else
					{
						printf("%s", temp);
					}
					separator = ", ";
					break;
				}
			default:      
				continue;
		}
	}
	va_end(params);
	printf("\n");
}
