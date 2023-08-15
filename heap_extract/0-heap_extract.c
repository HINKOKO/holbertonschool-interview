#include "binary_trees.h"

void heapify_down(binary_tree_t *root);


int get_size(heap_t *root)
{
	if (!root)
		return (0);

	return ( 1 + get_size(root->left) + get_size(root->right));
}

binary_tree_t *get_last(heap_t *root)
{
	int nodes, size = 0;
	binary_tree_t *last = NULL;

	size = get_size(root);
	/* printf("Size is effectively (number of nodes): %d\t\n", size); */
	for (nodes = 1; nodes < size; nodes <<= 1)
		;
	/* we are one level above the last, divide by 4 to went back to parent-level of last node*/
	/* printf("Nodes reached the number => %d\n\t YOOO", nodes); */
	nodes >>= 2;
	for (last = root; nodes > 0; nodes >>= 1)
	{
		/* if this binary ops return => it means */
		/* level is full */
		if (size & nodes)
			last = last->right;
		else
			last = last->left;
	}
	return (last);
}


/**
 * heap_extract
 * 
*/

int heap_extract(heap_t **root)
{
	binary_tree_t *last = NULL, *head = NULL;
	int extract = 0;

	if (!root || !*root)
		return (-1);
	head = *root;
	if (!head->left && !head->right)
	{
		extract = head->n;
		free(head);
		*root = NULL;
		return (extract);
	}
	/* reassing otherwise lost ?*/
	head = *root;
	extract = head->n;

	last = get_last(*root);

	/* prepare the parent to loose one child */
	if (last->parent->left == last)
		last->parent->left = NULL;
	else
		last->parent->right = NULL;
	last->left = head->left;
	last->right = head->right;
	last->parent = head->parent;

	if (head->left)
		head->left->parent = last;
	else
		head->right->parent = last;
	*root = last;
	free(head);

	heapify_down(*root);

	return (extract);
}
