#include "lists.h"

/**
 * get_nodeint_at_index - it returns the node at a certain index in lnklists
 * @head: the first node in the linked lists
 *
 * @index: the index of node to be returned
 * Return: this returns the pointer to the node we're checking for, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int k = 0;
	listint_t *ohu = head;

	while (ohu && k < index)
	{
		ohu = ohu->next;
		k++;
	}

	return (ohu ? ohu : NULL);
}
