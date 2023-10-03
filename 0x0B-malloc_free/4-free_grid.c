#include "main.h"
#include <stdlib.h>
/**
* free_grid - function to free the memmory allocated to grid function
* @grid: Grid array
* @height: array size
* Rerutn: nothing
* Code by Linus Obura
*/
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL)
	{
		return;
	}

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	
	free(grid);
}
