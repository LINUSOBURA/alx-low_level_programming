#include "main.h"
/**
  * _chessboard - function to print the chessboard
  * @a: pointer to an array
  */
void print_chessboard(char (*a)[8])
{
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
