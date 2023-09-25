#include "lists.h"

/**
 * get_nodeint_at_index -  function that returns the nth node of
 * a listint_t linked list.
 * @head: head nodes
 * @index: index of the node
 * Return:  the nth node of a listint_t linked list.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint_t *aptr = head;

	while (aptr != NULL)
	{
		if (a == index)
			return (aptr);
		aptr = aptr->next;
		a++;
	}
	return (NULL);
}
