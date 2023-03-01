#include "main.h"
#include <string.h>

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string.
 *
 * Return: A pointer to the resulting string dest.
 */
char *_strcat(char *dest, char *src)
{
	int src_index, dest_len;

	/* Find the end of the dest string */
	src_index = 0;
	while (dest[src_index] != '\0')
	src_index++;

	/* Append the src string */
	dest_len = 0;
	while (src[dest_len] != '\0')
	{
		dest[src_index] = src[dest_len];
		src_index++;
		dest_len++;
	}

	/* Add the terminating null byte */
	dest[src_index] = '\0';

	return (dest);
}
