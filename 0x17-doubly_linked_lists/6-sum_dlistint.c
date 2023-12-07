#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data (n)
 * of a dlistint_t linked list.
 * @head: Pointer to the head of the doubly linked list.
 * Return: Sum of all the data in the list. If the list is empty, return 0.
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
