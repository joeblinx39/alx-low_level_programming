#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string up to n bytes
 * @dest: the destination buffer
 * @src: the source string
 * @n: the maximum number of bytes to copy
 *
 * Return: pointer to the destination buffer
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
		dest[index] = src[index];

	for (; index < n; index++)
		dest[index] = '\0';

	return (dest);
}
