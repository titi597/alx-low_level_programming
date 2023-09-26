#include "lists.h"

/**
 * insert_nodeint_at_index - a function that inserts a new node at
 * a given position.
 * @head: head node
 * @idx: index of the list where the new node should be added.
 * @n: new node
 * Return:  the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a = 0;
	listint_t *apts = NULL;
	listint_t *aptr = *head;
	listint_t *trev = NULL;

	apts = malloc(sizeof(listint_t));
	if (apts == NULL)
	{
		return (NULL);
	}
	apts->n = n;

	if (idx == 0)
	{
		apts->next = *head;
		*head = apts;
		return (apts);
	}
	while (aptr != NULL && a < idx)
	{
		trev = aptr;
		aptr = aptr->next;
		a++;
	}
	if (a < idx)
	{
		free(apts);
		return (NULL);
	}
	trev->next = apts;
	apts->next = aptr;
	return (apts);
}
