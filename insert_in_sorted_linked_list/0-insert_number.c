#include "lists.h"

/**
 * insert_node - insert a number in a linked list (sorted)
 * @head: double pointer to the linked list to modify
 * @number: number to insert
 * Return: address of new node, NULL if failure
*/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new;
	listint_t *browse = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = number;
	new->next = NULL;

	/* case of empty linked list or number is the smallest ? */
	if (!*head || (*head)->n > new->n)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		browse = *head;
		for (; browse->next; browse = browse->next)
		{
			if (browse->next->n >= new->n)
				break;
		}
		new->next = browse->next;
		browse->next = new;
	}
	return (browse);
}
