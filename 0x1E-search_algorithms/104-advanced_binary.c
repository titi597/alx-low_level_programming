#include "search_algos.h"

/**
 * recursive_search - that searches for a value in recursive way.
 * @array: is a pointer to the first element of the array to search in
 * @size: is size number of array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int recursive_search(int *array, size_t size, int value)
{
	size_t half = size / 2;
	size_t i;

	if (array == NULL || size == 0)
		return (-1);

	printf("Searching in array");

	for (i = 0; i < size; i++)
		printf("%s %d", (i == 0) ? ":" : ",", array[i]);

	printf("\n");

	if (half && size % 2 == 0)
		half--;

	if (value == array[half])
	{
		if (half > 0)
			return (recursive_search(array, half + 1, value));
		return ((int)half);
	}

	if (value < array[half])
		return (recursive_search(array, half + 1, value));

	half++;
	return (recursive_search(array + half, size - half, value) + half);
}
/**
 * advanced_binary - function that searches for a value
 * @array:  is a pointer to the first element of the array to search in
 * @size: is the number of elements in array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int advanced_binary(int *array, size_t size, int value)
{
	int index;

	index = recursive_search(array, size, value);

	if (index >= 0 && array[index] != value)
		return (-1);

	return (index);
}
