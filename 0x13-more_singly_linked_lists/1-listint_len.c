#include "lists.h"

/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: head node
 * Return: the number of elements in a linked listint_t list.
 */

size_t listint_len(const listint_t *h)
{
	size_t apts = 0;

	while (h != NULL)
	{
		h = h->next;
		apts++;
	}
	return (apts);
}
