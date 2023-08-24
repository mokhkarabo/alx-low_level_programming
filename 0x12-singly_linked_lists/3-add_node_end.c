#include <stdlib.h>
#include <string.h>

typedef struct node {
	char *str;
	struct node *next;
} list_t;

/**
 * Adds a new node at the end of a list_t list.
 * @param head A pointer  to the head of the list
 * @param str the string to be duplicated and added to the new node.
 * @return the adress to the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node, *temp;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL){
	return NULL;
	}

	new_node->str = strdup(str);
	new_node->next = NULL;

	if(*head == NULL){
	*head = new_node;
	} else{
temp = *head;
while(temp->next != NULL){
	temp = temp->next;
}
temp->next = new_node;
}
return new_node;
}
