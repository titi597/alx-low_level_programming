#include "lists.h"

/**
 * free_listint - a function that frees a listint_t list.
 * @head: head node
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *aptr;

	while (head != NULL)
	{
		aptr = head;
		head = head->next;

		free(aptr);
	}
}
