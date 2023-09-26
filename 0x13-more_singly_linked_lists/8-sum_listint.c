#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data (n) of
 * a listint_t linked list.
 * @head: head node
 * Return: the sum of all the data of linked list.
 */
int sum_listint(listint_t *head)
{
	int apts = 0;

	while (head != NULL)
	{
		apts += head->n;
		head = head->next;
	}
	return (apts);
}
