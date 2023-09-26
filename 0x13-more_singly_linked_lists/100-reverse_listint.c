#include "lists.h"

/**
 * reverse_listint - a function that reverses a listint_t linked list.
 * @head: head node
 * Return: a pointer to the first node of the reversed list.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *trev = NULL;
	listint_t *apts = NULL;

	while (*head != NULL)
	{
		apts = (*head)->next;
		(*head)->next = trev;
		trev = *head;
		*head = apts;
	}
	*head = trev;
	return (*head);
}
