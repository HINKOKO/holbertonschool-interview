#ifndef __SANDPILES__
#define __SANDPILES__

#define GRID_SIZE 3
#define FALSE 0
#define TRUE 1
/* Switching True to 1 for continuing execution */

#include <stdio.h>
#include <stdlib.h>

void sandpiles_sum(int grid1[3][3], int grid2[3][3]);
static void print_grid(int grid[3][3]);
int is_stable(int grid[3][3]);
void temp_grid(int grid1[3][3], int computed[3][3]);
int topple(int grid[3][3]);



#endif /* __SANDPILES__ */
