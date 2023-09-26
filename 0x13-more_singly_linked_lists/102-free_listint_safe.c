#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head node
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t aka = 0;
	listint_t *next;

	if (h == NULL)
		return (0);

	while (*h != NULL)
	{
		aka++;
		next = (*h)->next;
		free(*h);
		*h = next;
		if (*h)
		{
			*h = NULL;
			break;
		}
	}
	return (aka);
}
