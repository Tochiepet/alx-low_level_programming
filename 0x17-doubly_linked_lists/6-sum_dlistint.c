#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * sum_dlistint - it will return
 * sum of all the data n;
 * of a doubly linked lists
 * @head: thehead of the lists
 * Return: thesum of the data
 *
 */
int sum_dlistint(dlistint_t *head)
{
	int some;

	some = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			some += head->n;
			head = head->next;
		}
	}

	return (some);
}
