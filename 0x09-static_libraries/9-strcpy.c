#include "main.h"

/**
 * _strcpy - copies the string pointed to by src, including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @dest: pointer to the buffer to copy the string to
 * @src: pointer to the string to be copied
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index] != '\0')
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
