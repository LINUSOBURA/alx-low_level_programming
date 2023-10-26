#include "main.h"
/**
* binary_to_uint - function to convert binary numbers to integer
* @b: string of 0 and 1
* Return: decimals
* Code by Linus Obura
*/
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int decimal = 0;
	int length = strlen(b), i;

	for (i = 0; i < length; i++)
	{
		decimal <<= 1;

		if (b[i] == '1')
		{
			decimal |= 1;
		}
		else if (b[i] != '0')
		{
			return (0);
		}
	}

	return (decimal);
}
