#include "lists.h"

/**
 * free_listint2 - will free linked list
 * @head: the pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **head)
{
	listint_t *horm;

	if (head == NULL)
		return;

	while (*head)
	{
		horm = (*head)->next;
		free(*head);
		*head = horm;
	}

	*head = NULL;
}
