#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: pointer to the destination memory area
 * @src: pointer to the source memory area
 * @n: the number of bytes to copy
 *
 * Return: a pointer to the destination memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	char *d = dest;

	char *s = src;

	for (i = 0; i < n; i++)
	{
		d[i] = s[i];
	}

	return (dest);
}
