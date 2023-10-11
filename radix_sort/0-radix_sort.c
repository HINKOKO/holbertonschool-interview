#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * radix_sort - sorts an array of int ascending order
 * using the radix sort LSD tech
 * @array: the array to sort
 * @size: Number of elements in the array
 */

void radix_sort(int *array, size_t size)
{
	size_t i = 0;
	int max = INT_MIN;
	int bucket[RADIX] = {0}, *semi;
	int SD = 1;

	if (!array || size < 2)
		return;

	semi = malloc(size * sizeof(*semi));
	if (!semi)
		return;

	for (i = 0; i < size; i++)
		max = array[i] > max ? array[i] : max;

	while ((max / SD) > 0)
	{
		print_array(array, size);

		/* count the number of 'keys' digits that'll go in each bucket */
		for (i = 0; i < size; i++)
			bucket[(array[i] / SD) % 10]++;

		/* add the count of the prevs buckets */
		/* Acquires the indexes after the end of each bucket location */
		/* works similar to the count sort algorithm */
		for (i = 1; i < 10; i++)
			bucket[i] += bucket[i - 1];
		/* Use bucket to fill the semi-sorted array */
		for (i = (int)size - 1; (int)i >= 0; i--)
			semi[--bucket[(array[i] / SD) % 10]] = array[i];

		for (i = 0; i < size; i++)
			array[i] = semi[i];

		/* Let's go to next significant digit SD */
		SD *= 10;
	}
	free(semi);
}
