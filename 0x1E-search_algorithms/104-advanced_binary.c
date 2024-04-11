#include "search_algos.h"

/**
 * binary_search_recursive - that searches for a value in recursive way.
 * @array: is a pointer to the first element of the array to search in
 * @low: is low number of array
 * @high: is high number of array
 * @value: is the value to search for
 * Return: the index where value is located
 */
int binary_search_recursive(int *array, int low, int high, int value)
{
	if (low <= high)
	{
		int i;
		int mid = low + (high - low) / 2;

		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);

			if (i != high)
				printf(", ");
		}
		printf("\n");
		printf("Value checked array[%d] = [%d]\n", mid, array[mid]);

		if (array[mid] == value)
		{
			if (mid == low || array[mid - 1] != value)
				return (mid);
			else
				return (binary_search_recursive(array, low, mid - 1, value));
		}
		else if (array[mid] < value)
			return (binary_search_recursive(array, mid + 1, high, value));
		else
			return (binary_search_recursive(array, low, mid - 1, value));
	}
	return (-1);
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
	if (array == NULL || size == 0)
		return (-1);
	return (binary_search_recursive(array, 0, size - 1, value));
}

