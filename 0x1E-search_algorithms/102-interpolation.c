#include "search_algos.h"

/**
 * interpolation_search - function that searches for a value in a sorted array
 * @array:  is a pointer to the first element of the array to search in
 * @size:  is the number of elements in array
 * @value: is the value to search for
 * Return: the first index where value is located
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t ps, lw, high;
	double e;

	if (array == NULL)
		return (-1);

	lw = 0;
	high = size - 1;

	while (size)
	{
		e = (double)(high - lw) / (array[high] - array[lw]) * (value - array[lw]);
		ps = (size_t)(lw + e);
		printf("Value checked array[%d]", (int)ps);

		if (ps >= size)
		{
			printf(" is out of range\n");
			break;
		}
		else
		{
			printf(" = [%d]\n", array[ps]);
		}

		if (array[ps] == value)
			return ((int)ps);

		if (array[ps] < value)
			lw = ps + 1;
		else
			high = ps - 1;

		if (lw == high)
			break;
	}

	return (-1);
}
