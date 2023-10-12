#include <stdlib.h>

/**
*** free_grid - frees the memory created *****
*** when creating the two by two array *******
*** @grid: the memory to be freed ************
*** @height: height of the array *************
*** Description: the function frees up the ***
*** memory created for the two by two array **
**/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
