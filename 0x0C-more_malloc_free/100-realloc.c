#include "main.h"
#include <stdlib.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: is a pointer to the memory previously allocated
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: void
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int a;
	char *jk;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		jk = malloc(new_size);

		if (jk == NULL)
			return (NULL);
		return (jk);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	jk = malloc(new_size);

	if (jk == NULL)
		return (NULL);
	a = 0;
	while (a < old_size && a < new_size)
	{
		jk[a] = ((char *) ptr)[a];
		a++;
	}
	free(ptr);
	return (jk);
}
