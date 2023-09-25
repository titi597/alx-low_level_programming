#include "lists.h"

/**
 * free_listint2 - a function that frees a listint_t list.
 * @head: head node
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *aptr = *head;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return;
	}

	while (aptr != NULL)
	{
		temp = aptr->next;
		free(aptr);
		aptr = temp;
	}
	*head = NULL;
}
/**
 * create_node - creating new listint_t node
 * @n: new node
 * Return: created new nodes
 */
listint_t *create_node(int n)
{
	listint_t *aptr;

	aptr = (listint_t *)malloc(sizeof(listint_t));

	if (aptr == NULL)
	{
		fprintf(stderr, "Memory allocation failed\n");
		exit(1);
	}
	aptr->n = n;
	aptr->next = NULL;
	return (aptr);
}
