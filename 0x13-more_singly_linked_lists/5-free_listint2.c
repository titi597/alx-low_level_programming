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

	if (head == NULL)
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
