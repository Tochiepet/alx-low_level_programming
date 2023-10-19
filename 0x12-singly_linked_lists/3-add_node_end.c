#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - it will add new node to end of linked list
 *
 * @head: this is double pointer to list
 * @str: it is string to node
 * Return: this will return address to element or NULL
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *kart;
	list_t *layr = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	kart = malloc(sizeof(list_t));
	if (!kart)
		return (NULL);

	kart->str = strdup(str);
	kart->len = len;
	kart->next = NULL;

	if (*head == NULL)
	{
		*head = kart;
		return (kart);
	}

	while (layr->next)
		layr = layr->next;

	layr->next = kart;

	return (kart);
}
