#include "lists.h"

/**
 * pop_listint - it will delete head node of linked lists
 *
 * @head: the pointer to 1st element in linked lists
 * Return:it returns the data inside the elements that was deleted
 */
int pop_listint(listint_t **head)
{
	listint_t *oku;
	int lorf;

	if (!head || !*head)
		return (0);

	lorf = (*head)->n;
	oku = (*head)->next;
	free(*head);
	*head = oku;

	return (lorf);
}
