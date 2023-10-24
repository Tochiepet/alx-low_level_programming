#include "lists.h"

/**
 * reverse_listint - will reverse linked lists
 *
 * @head: the pointer to the first node in the list
 * Return: will return pointer to first node in new lists
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *azu = NULL;
	listint_t *ihu = NULL;

	while (*head)
	{
		ihu = (*head)->next;
		(*head)->next = azu;
		azu = *head;
		*head = ihu;
	}

	*head = azu;

	return (*head);
}
