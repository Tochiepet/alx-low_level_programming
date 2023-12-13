#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_dlistint - this willfree a 
 * dlistint_t lists.
 * @head: thepointer to head of lists
 *
 * Return: it will return nothing
 **/
void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
	return;

	while (head->next)
	{
	head = head->next;
	free(head->prev);
	}
	free(head);
}
