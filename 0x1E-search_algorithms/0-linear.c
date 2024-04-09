#include <stddef.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to an array
 * @size: is the number of elements in array
 * @value: is the value to search
 * Return: the first index where value is located
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);

		if (array[i] == value)
			return (i);
	}
	return (-1);
}
