#include "lists.h"

/**
 * find_listint_loop - it will find d loop a linked lists
 *
 * @head: the linked list to search for it
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *yor = head;
	listint_t *siso = head;

	if (!head)
		return (NULL);

	while (yor && siso && siso->next)
	{
		siso = siso->next->next;
		yor = yor->next;
		if (siso == yor)
		{
			yor = head;
			while (yor != siso)
			{
				yor = yor->next;
				siso = siso->next;
			}
			return (siso);
		}
	}

	return (NULL);
}
