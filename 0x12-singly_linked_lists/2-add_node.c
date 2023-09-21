#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - a function that adds a new node at the beginning of a list_t list
 * @str: string
 * @head: head node
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *newnodes;
	unsigned int a, count = 0;

	newnodes = malloc(sizeof(list_t));
	if (newnodes == NULL)
		return (NULL);
	newnodes->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newnodes->len = count;
	newnodes->next = *head;
	*head = newnodes;

	return (*head);
}
