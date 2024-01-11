#include "sort.h"

/**
 * sift_down - perform sift-down on worked heap
 * @array: pointer to array (heap)
 * @n: current element of array
 * @idx: index
 * @size: Number of elements in array
 */

void sift_down(int *array, int n, int idx, size_t size)
{
	int biggest = idx;
	int tmp;
	int left = 2 * idx + 1;
	int right = 2 * idx + 2;

	if (left < n && array[left] > array[biggest])
		biggest = left;
	if (right < n && array[right] > array[biggest])
		biggest = right;

	if (biggest != idx)
	{
		tmp = array[idx];
		array[idx] = array[biggest];
		array[biggest] = tmp;
		print_array(array, size);
		sift_down(array, n, biggest, size);
	}
}

/**
 * heap_sort - sorts an array of intergers in ascending order using HeapSort
 * sift-down way
 * @array: pointer to first element of array to sort
 * @size: size of array
 */

void heap_sort(int *array, size_t size)
{
	int i;
	int tmp;

	if (!size || size < 2)
		return;
	/* Start to build the heap */
	/* size /  2 - 1 => position of last non-leaf node */
	for (i = size / 2 - 1; i >= 0; i--)
		sift_down(array, size, i, size);

	/* extract element from heap one -by one*/
	for (i = size - 1; i > 0; i--)
	{
		tmp = array[0];
		array[0] = array[i];
		array[i] = tmp;

		print_array(array, size);

		sift_down(array, i, 0, size);
	}
}
