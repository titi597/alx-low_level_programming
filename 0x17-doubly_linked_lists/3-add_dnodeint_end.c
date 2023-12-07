#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a dlistint_t list.
 * @head: Pointer to a pointer to the head of the doubly linked list.
 * @n: Value to be assigned to the new node.
 * Return: The address of the new element, or NULL if it failed.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_nodes = malloc(sizeof(dlistint_t));
	dlistint_t *temp = *head;

	if (new_nodes == NULL)
		return (NULL);
	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
	{
		new_nodes->prev = NULL;
		*head = new_nodes;
		return (new_nodes);
	}
	while (temp->next != NULL)
		temp = temp->next;
	new_nodes->prev = temp;
	temp->next = new_nodes;

	return (new_nodes);
}
