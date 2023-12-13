#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_dnodeint_end - eill add new node at the end
 * of a dlistint_t lists
 * @head: the head of the lists
 * @n: the value of the elements
 * Return: it will returnthe address
 * of the new element
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *k;
	dlistint_t *mew;

	mew = malloc(sizeof(dlistint_t));
	if (mew == NULL)
		return (NULL);

	mew->n = n;
	mew->next = NULL;

	k = *head;

	if (k != NULL)
	{
		while (k->next != NULL)
			k = k->next;
		k->next = mew;
	}
	else
	{
		*head = mew;
	}

	mew->prev = k;

	return (mew);
}
