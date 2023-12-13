#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - this will return the 
 * nth node of a dlistint_t linked list.
 * @head: the pointer to head of the lists
 *
 * @index: the index of the node to
 * search for, starts from 0s
 * Return: it will return nth node or nulls
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int zise;
	dlistint_t *pmo;

	zise = 0;
	if (head == NULL)
	return (NULL);

	pmo = head;
	while (pmo)
	{
	if (index == zise)
	return (pmo);
	zise++;
	pmo = pmo->next;
	}
	return (NULL);
}
