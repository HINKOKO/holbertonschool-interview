#ifndef __AVLFROMARR__
#define __AVLFROMARR__

#include <stdlib.h>
#include <stdio.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s avl_t;

avl_t *sorted_array_to_avl(int *array, size_t size);
avl_t *look_and_insert(avl_t *daddy, int *array, int left, int right);
avl_t *new_node(avl_t *daddy, int n);
void binary_tree_print(const avl_t *tree);

#endif /* __AVLFROMARR__ */
