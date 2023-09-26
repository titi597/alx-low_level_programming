#include "lists.h"

/**
 * find_listint_loop - a function that finds the loop in a linked list.
 * @head: head node
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *apts = head;
	listint_t *aptr = head;

	while (apts && aptr && aptr->next)
	{
		apts = apts->next;
		aptr = aptr->next->next;

		if (apts == aptr)
		{
			apts = head;
			while (apts != aptr)
			{
				apts = apts->next;
				aptr = aptr->next;
			}
			return (apts);
		}
	}
	return (NULL);
}
