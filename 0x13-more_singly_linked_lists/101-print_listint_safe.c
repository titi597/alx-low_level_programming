#include "lists.h"

/**
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head node
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *apts = head;
	const listint_t *aptr[1024];
	size_t a;
	size_t titi = 0;

	while (apts != NULL)
	{
		for (a = 0; a < titi; a++)
		{
			if (aptr[a] == apts)
			{
				printf("-> [%p] %d\n", (void *)apts, apts->n);
				return (titi);
			}
		}

		aptr[titi++] = apts;
		printf("[%p] %d\n", (void *)apts, apts->n);
		apts = apts->next;
	}
	return (titi);
}
