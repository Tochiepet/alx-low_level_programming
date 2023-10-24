#include "lists.h"

/**
 * add_nodeint_end - it will adds a node at the end of a linked list
 * @head: the pointer to first element in lists
 * @n: the data to insert in new elements
 * Return: will return pointer to new node, NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ohu;
	listint_t *remt = *head;

	ohu = malloc(sizeof(listint_t));
	if (!ohu)
		return (NULL);

	ohu->n = n;
	ohu->next = NULL;

	if (*head == NULL)
	{
		*head = ohu;
		return (ohu);
	}

	while (remt->next)
		remt = remt->next;

	remt->next = ohu;

	return (ohu);
}
