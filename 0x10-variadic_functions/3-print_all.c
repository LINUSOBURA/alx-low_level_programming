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
	char c_value;
	int i_value;
	float f_value;
	char *s_value;
	va_list params;

	va_start(params, format);

	while (format[i])
	{
		if (comma && (format[i] == 'c' || format[i] == 'i' ||
				format[i] == 'f' || format[i] == 's'))
			printf(", ");

		switch (format[i++])
		{
			case 'c':
				c_value = (char)va_arg(params, int);
				printf("%c", c_value);
				comma = 1;
				break;
			case 'i':
				i_value = va_arg(params, int);
				printf("%d", i_value);
				comma = 1;
				break;
			case 'f':
				f_value = (float)va_arg(params, double);
				printf("%f", f_value);
				comma = 1;
				break;
			case 's':
				s_value = va_arg(params, char *);
				if (!s_value)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s_value);
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
