#include <stdio.h>
#include <stdlib.h>
#include "search.h"

/**
 * print_skiplist - dump the content of a skiplist
 * @list: pointer to head of skip_list
*/

void print_skiplist(const skiplist_t *list)
{
	const skiplist_t *node;

	printf("List :\n");
	for (node = list; node; node = node->next)
		printf("Index[%d] = [%d]\n", node->index, node->n);
	printf("\nExpress lane :\n");
	for (node = list; node; node = node->express)
		printf("Index[%d] = [%d]\n", node->index, node->n);
	printf("\n");
}
