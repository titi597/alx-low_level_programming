#include "lists.h"

/**
 * list_len - a function that returns the number of elements in
 * a linked list_t list.
 * @h: head node
 * Return: length
 */

size_t list_len(const list_t *h)
{
	size_t nodes;

	nodes = 0;
	while (h != NULL)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
