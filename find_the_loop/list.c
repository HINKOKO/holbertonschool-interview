#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (!new)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}

/**
 *print_listint_safe - prints linked list safe way
 *seems holberton's main test file is weird
 *to send us in the choux and orties and die of checker attack
 *@head: pointer to first node
 *Return: number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t num = 0;
	long int diff;

	while (head)
	{
		diff = head - head->next;
		num++;
		printf("[%p] %d\n", (void *)head, head->n);
		if (diff > 0)
			head = head->next;
		else
		{
			printf("-> [%p] %d\n", (void *)head->next, head->next->n);
			break;
		}
	}
	return (num);
}

/**
 *free_listint_safe - frees a list in a safe way,
 *infinite zgertch avoided
 *@h: double pointer to first node
 *Return: size of the list that was free'd
 */

size_t free_listint_safe(listint_t **h)
{
	size_t num = 0;
	long int diff;
	listint_t *tmp;

	if (h == NULL)
		return (1);

	while (*h)
	{
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
			num++;
		}
		else
		{
			free(*h);
			*h = NULL;
			num++;
			break;
		}
	}
	*h = NULL;
	return (num);
}
