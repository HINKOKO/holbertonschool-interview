#include <stdlib.h>
#include "search.h"

/**
 * free_skiplist - Deallocates properly singly linked list
 * @list: pointer to the LL to be freed
 * 
*/

void free_skiplist(skiplist_t *list)
{
	skiplist_t *node;

	if (list)
	{
		node = list->next;
		free(list);
		free_skiplist(node);
	}
}
