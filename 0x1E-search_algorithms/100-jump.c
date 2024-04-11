#include "search_algos.h"
#include <math.h>

/**
 * jump_search - function that searches for a value in a sorted array
 * @array: is a pointer to the first element of the array
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int jump_search(int *array, size_t size, int value)
{
	int idx, v, t, prev;

	if (array == NULL || size == 0)
		return (-1);

	v = (int)sqrt((double)size);
	t = 0;
	prev = idx = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", idx, array[idx]);

		if (array[idx] == value)
			return (idx);
		t++;
		prev = idx;
		idx = t * v;
	} while (idx < (int)size && array[idx] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, idx);

	for (; prev <= idx && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
