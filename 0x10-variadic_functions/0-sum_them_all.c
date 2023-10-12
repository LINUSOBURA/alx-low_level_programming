#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function to sum all parameters
 * @n: first parameter
 * Return: sum or 0
 * Code by Linus Obura
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_list parameters;
	va_start(parameters, n);

	for (i = 0; i < n; i++)
	{
		sum += va_arg(parameters, int);
	}

	va_end(parameters);
	return (sum);
}
