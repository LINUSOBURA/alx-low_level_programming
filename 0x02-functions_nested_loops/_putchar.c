#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes character to stdout
 * @c: The character to be printed
 *
 * Return: (1) sucess (-1) error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
