#include "lists.h"

/**
 * add_nodeint_end - function that adds a new node at the end of
 * a listint_t list.
 * @head: head node
 * @n: new node
 * Return: the address of the new element, or NULL if it failed.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *apts = malloc(sizeof(listint_t));

	if (apts == NULL)
	{
		return (NULL);
	}
	apts->n = n;
	apts->next = NULL;

	if (*head == NULL)
	{
		*head = apts;
	}
	else
	{
		listint_t *aptr = *head;

		while (aptr->next != NULL)
		{
			aptr = aptr->next;
		}
		aptr->next = apts;
	}
	return (apts);
}
