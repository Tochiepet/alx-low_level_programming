#include "lists.h"

/**
 * add_nodeint - it will add new node in the start of the linked lists
 *
 * @head: the pointer to first node in the list
 * @n: the data to insert in that new node
 * Return: will return pointer to the new node, NULL if it fail
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *knor;

	knor = malloc(sizeof(listint_t));
	if (!knor)
		return (NULL);

	knor->n = n;
	knor->next = *head;
	*head = knor;

	return (knor);
}
