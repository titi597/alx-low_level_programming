#include "lists.h"

/**
 * free_listint_safe - function that frees a listint_t list.
 * @h: head node
 * Return: the size of the list that was free’d.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t aka = 0;
	listint_t *apts;
	int titi;

	if (!h || !*h)
		return (0);

	for (; *h; aka++)
	{
		titi = *h - (*h)->next;
		if (titi > 0)
		{
			apts = (*h)->next;
			free(*h);
			*h = apts;
		}
		else
		{
		free(*h);
		*h = NULL;
		break;
		}
	}
	*h = NULL;

	return (aka);
}
