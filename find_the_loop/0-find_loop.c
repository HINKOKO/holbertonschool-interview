#include "lists.h"

/**
 * find_listint_loop - finds any loop in a singly linked list
 *
 * @head: pointer to head node
 *
 * Return: Address of the node where the loop might start,
 * or NULL if there is no loop
 *
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *franklin = head, *rabbit = head;

	while (franklin && rabbit && rabbit->next)
	{
		franklin = franklin->next;
		rabbit = rabbit->next->next;
		if (rabbit == franklin)
		{
			franklin = head;
			while (franklin != rabbit)
			{
				franklin = franklin->next;
				rabbit = rabbit->next;
			}
			return (rabbit);
		}
	}
	return (NULL);
}
