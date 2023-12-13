#include <stdio.h>
#include <stdlib.h>
#include "lists.h"


/**
 * add_dnodeint - it will add a new node
 * at the beginningof a dlistint_t list
 * @head: it is the head of the lists
 * @n: thevalue of the elements
 * Return: it will return the address of the new element
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ohui;
	dlistint_t *q;

	ohui = malloc(sizeof(dlistint_t));
	if (ohui == NULL)
		return (NULL);

	ohui->n = n;
	ohui->prev = NULL;
	q = *head;

	if (q != NULL)
	{
		while (q->prev != NULL)
			q = q->prev;
	}

	ohui->next = q;

	if (ohui != NULL)
		q->prev = ohui;

	*head = ohui;

	return (ohui);
}



