#include "main.h"
#include <string.h>
/**
 * _strncat - concatenates two strings, using at most n bytes from src
 * @dest: destination string
 * @src: source string
 * @n: maximum number of bytes to use from src
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = 0, src_index;

	/* find length of dest string */
	while (dest[dest_len] != '\0')
		dest_len++;

	/* append src string, up to n bytes */
	for (src_index = 0; src_index < n && src[src_index] != '\0'; src_index++)
		dest[dest_len + src_index] = src[src_index];

	/* add null terminator to end of string */
	dest[dest_len + src_index] = '\0';

	return (dest);
}
