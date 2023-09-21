#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_node_end - function that add new node at the end of list_t list
 * @head: head node
 * @str: string
 * Return:  the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnodes, *tmp;
	unsigned int a, count = 0;

	newnodes = malloc(sizeof(list_t));
	if (newnodes == NULL)
		return (NULL);
	newnodes->str = strdup(str);
	for (a = 0; str[a] != '\0'; a++)
		count++;
	newnodes->len = count;
	newnodes->next = NULL;
	tmp = *head;

	if (tmp == NULL)
		*head = newnodes;
	else
	{
		while (tmp->next != NULL)
			tmp = tmp->next;
		tmp->next = newnodes;
	}
	return (*head);
}
