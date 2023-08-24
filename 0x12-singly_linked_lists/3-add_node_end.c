#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * Adds a new node at the end of a list_t list.
 * @param head A pointer  to the head of the list
 * @param str the string to be duplicated and added to the new node.
 * @return the adress to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
