#include "binary_trees.h"

/**
 * new_node - transform array int into a new node of AVL
 * @daddy: pointer to parent node of new node
 * @n: value for newnode
 * Return: pointer to newnode
 */

avl_t *new_node(avl_t *daddy, int n)
{
	avl_t *new = malloc(sizeof(avl_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->parent = daddy;
	new->left = NULL;
	new->right = NULL;
	return (new);
}

/**
 * look_and_insert - perform a research in AVL tree and insert
 * properly
 * @daddy: pointer to parent
 * @array: pointer to elements of array
 * @left: left index array
 * @right: right index array
 * Return: pointer to root of created AVL or NULL
 */

avl_t *look_and_insert(avl_t *daddy, int *array, int left, int right)
{
	int mid;
	avl_t *new;

	/* when its over */
	if (right < left)
		return (NULL);
	mid = (left + right) / 2;
	new = new_node(daddy, array[mid]);
	new->left = look_and_insert(new, array, left, mid - 1);
	new->right = look_and_insert(new, array, mid + 1, right);
	return (new);
}
/**
 * sorted_array_to_avl - converts a sorted array to AVL tree
 * @array: pointer to 1st element of array
 * @size: size of the array
 * Return: pointer to the root node of new AVL tree
 */

avl_t *sorted_array_to_avl(int *array, size_t size)
{
	return (look_and_insert(NULL, array, 0, size - 1));
}
