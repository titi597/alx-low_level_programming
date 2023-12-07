#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes = malloc(sizeof(dlistint_t));

	if (new_nodes == NULL)
		return (NULL);
	new_nodes->n = n;
	new_nodes->prev = NULL;
	new_nodes->next = *head;

	if (*head != NULL)
		(*head)->prev = new_nodes;
	*head = new_nodes;
	return (new_nodes);
}
