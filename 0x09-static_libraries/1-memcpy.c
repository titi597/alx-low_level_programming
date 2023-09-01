#include "main.h"

/**
 * _memcpy - function that copies memory area.
 * @dest: destination of bytes
 * @src: source of bytes
 * @n: bytes from memory area
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
		dest[a] = src[a];
	return (dest);
}
