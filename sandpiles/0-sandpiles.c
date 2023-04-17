#include "sandpiles.h"

/**
 * sandpiles_sum - computes the sum of two sandpiles
 * @grid1: sandpile grid 1 (assumed to be individually stable)
 * @grid2: sandpile grid 2 (same base property)
*/

void sandpiles_sum(int grid1[3][3], int grid2[3][3])
{
	int i, j;
	int computed[3][3];

	for (i = 0; i < GRID_SIZE; i++)
		for (j = 0; j < GRID_SIZE; j++)
			grid1[i][j] += grid2[i][j];

	while (!is_stable(grid1))
	{
		temp_grid(grid1, computed);
		print_grid(grid1);
		topple(grid1);
	}
}

/**
 * topple - topples plays with sandgrains
 * redistribute them to 4 neighbors, manage 'out
 * of the grid neighbors' and inside neighbors
 * @grid: the grid to topple-lify
 * Return: 1 for success/continue
*/

int topple(int grid[3][3])
{
	int i, j;

	for (i = 0; i < GRID_SIZE; i++)
		for (j = 0; j < GRID_SIZE; j++)
			if (grid[i][j] > 3)
			{
				grid[i][j] -= 4;
				/* manage neighbors exists or not */
				if (i > 0)
					grid[i - 1][j]++;
				if (i < 2)
					grid[i + 1][j]++;
				if (j > 0)
					grid[i][j - 1]++;
				if (j < 2)
					grid[i][j + 1]++;
			}
	return (1);
}

/**
 * print_grid - Print 3x3 grid
 * @grid: 3x3 grid
 *
 */

static void print_grid(int grid[3][3])
{
	int i, j;

	printf("=\n");
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (j)
				printf(" ");
			printf("%d", grid[i][j]);
		}
		printf("\n");
	}
}

/**
 * is_stable - check if a grid sandpile is stable
 * @grid: the grid to check on
 * Return: 1 for stable, 0 otherwise
*/
int is_stable(int grid[3][3])
{
	int i = 0, j = 0;

	for (i = 0; i < GRID_SIZE; i++)
		for (j = 0; j < GRID_SIZE; j++)
			if (grid[i][j] > 3)
				return (FALSE);
	return (TRUE);
}

/**
 * temp_grid - holds a copy of the grid at each steps
 * displays it if not stable, to see and understand the calculus
 * @computed: temp grid computed
 * @grid1: the grid we copy
*/

void temp_grid(int grid1[3][3], int computed[3][3])
{
	int i, j;

	for (i = 0; i < GRID_SIZE; i++)
		for (j = 0; j < GRID_SIZE; j++)
			computed[i][j] = grid1[i][j];
}
