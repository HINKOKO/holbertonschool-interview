#include "binary_trees.h"

/**
 * binary_tree_node - gives birth to a fresh binary tree
 * @parent: pointer to the parent node of the node to create
 * @value: value filled in the new node
 * Return: NULL=> failure; pointer to the new node otherwise
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree = malloc(sizeof(binary_tree_t));

	if (!new_tree)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;
	new_tree->left = NULL;
	new_tree->right = NULL;

	return (new_tree);

}
