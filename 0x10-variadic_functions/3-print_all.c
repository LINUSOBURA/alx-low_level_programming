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
	int separator = 0;

	va_start(params, format);

	while (format[i])
	{
		if (separator)
		{
			printf(", ");
			separator = 0;
		}
		switch (format[i++])
		{
			case 'c':
				printf("%c", (char)va_arg(params, int));
				separator = 1;
				break;
			case 'i':
				printf("%d", va_arg(params, int));
				separator = 1;
				break;
			case 'f':
				printf("%f", va_arg(params, double));
				separator = 1;
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
					separator = 1;
					break;
				}
			default:      
				continue;
		}
	}
	va_end(params);
	printf("\n");
}
