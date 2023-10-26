#include "main.h"
/**
 * get_endianness - function that checks the endianness
 * union: union of ...
 * Return: 0 if big endian, 1 if little endian
 * Code by Linus Obura
 */
int get_endianness(void)
{
	union
	{
		unsigned int i;
		char c[sizeof(unsigned int)];
	} endiannessChecker;

	endiannessChecker.i = 1;

	return (endiannessChecker.c[0] == 1);
}
