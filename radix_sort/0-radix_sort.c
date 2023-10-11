#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include "sort.h"

/**
 * get_max - utility function to find max of array
 *
 * @array: array to find max in
 * @size: number of elments in the array
 *
 * Return: max value found
 */

int get_max(int *array, size_t size)
{
	size_t i;
	int max;

	max = array[0];
	for (i = 1; i < size; i++)
		if (array[i] > max)
			max = array[i];
	return (max);
}

/**
 * radix_sort - sorts an array of int ascending order
 * using the radix sort LSD tech
 * @array: the array to sort
 * @size: Number of elements in the array
 */

void radix_sort(int *array, size_t size)
{
	int r, bucket[10][10];
	int bucket_count[10] = {0};
	size_t i, j, k, NOP = 0, div = 1, l, pass;

	if (!array || size < 2)
		return;
	l = get_max(array, size);
	while (l > 0)
		NOP++, l /= 10;

	for (pass = 0; pass < NOP; pass++)
	{
		for (i = 0; i < 10; i++)
			bucket_count[i] = 0;

		for (i = 0; i < size; i++)
		{
			k = (array[i] / div) % 10;
			bucket[k][bucket_count[k]] = array[i];
			bucket_count[k] += 1;
		}
		i = 0;
		for (j = 0; j < 10; j++)
		{
			for (r = 0; r < bucket_count[j]; r++)
			{
				array[i] = bucket[j][r];
				i++;
			}
		}
		print_array(array, size);
		div *= 10;
	}
}
