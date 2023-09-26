#include "lists.h"

/**
 * delete_nodeint_at_index - a function that deletes the node at index index of
 * a listint_t linked list.
 * @head: head node
 * @index: index of the node that should be deleted. Index starts at 0
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *aptr = *head;
	listint_t *trev = NULL;
	unsigned int a = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}
	while (aptr != NULL && a < index)
	{
		trev = aptr;
		aptr = aptr->next;
		a++;
	}
	if (a == index && aptr != NULL)
	{
		trev->next = aptr->next;
		free(aptr);
		return (1);
	}
	return (-1);
}
