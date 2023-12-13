#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_dnodeint_at_index - it willdelete the 
 * node at index of adlistint_t linked list
 *
 * @head: its thehead of the lists
 * @index: this isindex of the new nodes
 * Return: it will return if it succeeded, -1 
 * if it fails
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *k1;
	dlistint_t *k2;
	unsigned int q;

	k1 = *head;

	if (k1 != NULL)
		while (k1->prev != NULL)
			k1 = k1->prev;

	q = 0;

	while (k1 != NULL)
	{
		if (q == index)
		{
			if (q == 0)
			{
				*head = k1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				k2->next = k1->next;

				if (k1->next != NULL)
					k1->next->prev = k2;
			}

			free(k1);
			return (1);
		}
		k2 = k1;
		k1 = k1->next;
		q++;
	}

	return (-1);
}
