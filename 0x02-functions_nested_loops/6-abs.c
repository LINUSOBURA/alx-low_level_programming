#include "main.h"
/**
 * _abs - Entry point of the program
 * @i: parameter
 * Return: 0 sucess
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (i = i * -1);
	}
	else
	{
		return (i);
	}
}
