#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head node
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t aka = 0;
	listint_t*titi;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		switch ((*h) - (*h)->next)
		{
			case 1:
				titi = (*h)->next;
				free(*h);
				*h = titi;
				aka++;
				break;
			default:
				free(*h);
				*h = NULL;
				aka++;
				break;
		}
	}

	return (aka);
}
