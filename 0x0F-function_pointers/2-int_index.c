#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: an array
 * @size: an array size
 * @cmp: is a pointer to the function to be used to compare values
 * Return: the index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL)
		return (-1);
	if (cmp == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	a = 0;
	while (a < size)
	{
		if (cmp(array[a]) == 1)
			return (a);
		a++;
	}
	return (-1);
}
