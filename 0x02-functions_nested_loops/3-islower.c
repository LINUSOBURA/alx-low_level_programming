#include "main.h"
/**
 * _islower - function to check is a number is lcse
 * @c:  parameter to be checked in ASCII
 * Return: 0 sucess
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
