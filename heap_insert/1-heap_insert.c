#include "binary_trees.h"

/**
 * heap_insert - insert a value into a Max Binary Heap
 * @root: double pointer to root node
 * ==> we're going to modify it don't loose track!
 * @value: value to insert in the new node
 * Return: pointer to freshly inserted node, NULL on failure
 * Watch 'correct steps' in the readme for explanation about that code
*/

heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *new;

	new = *root;
	if (!new)
	{
		*root = binary_tree_node(new, value);
		return (*root);
	}
	if (!new->right)
	{
		new->right = binary_tree_node(new, value);
		return (swapper(&new->right));
	}
	if (!new->left)
	{
		new->left = binary_tree_node(new, value);
		return (swapper(&new->left));
	}
	if (subtree_len(new->right) >= subtree_len(new->left))
		return (heap_insert(&new->left, value));
	else
		return (heap_insert(&new->right, value));
}


/**
 * swapper - utility function to perform swapping ops
 * to satisfy max-heap property
 * @root: double pointer to root of heap
 * Return: pointer to new node swapped
*/

heap_t *swapper(heap_t **root)
{
	heap_t *tmp;
	int holder;

	while (tmp->n > tmp->parent->n)
	{
		holder = tmp->parent->n;
		tmp->parent->n = tmp->n;
		tmp->n = holder;
		tmp = tmp->parent;
		if (!tmp->parent)
			break;
	}
	return (tmp);
}



/**
 * subtree_len - check and returns smallest subtree
 * why? => binary heap is allways complete binary tree
 * complete BT always filled (from top to bottom), and left to right.
 * checking smallest path => insert in position to keep complete the BT
 * therefore the binary heap too,don't violate property 1
 * https://www.youtube.com/watch?v=6JxvKfSV9Ns&ab_channel=SithDev
 * when we insert our new_node
 * @parent: parent of new node
 * Return: smallest path as int
*/

int subtree_len(heap_t *node)
{
	if (!node->right || !node->left)
		return (0);
	if (node->right)
		return (subtree_len(node->right));
	if (node->left)
		return (subtree_len(node->left));
}
