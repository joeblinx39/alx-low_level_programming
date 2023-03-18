#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string to copy
 * @s2: second string to copy
 * @n: number of bytes of s2 to copy
 * Return: newMem (success)
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, j, k;
	char *newMem;

	if (s1 == NULL)
		i = 0;
	else
	{
		for (i = 0; s1[i]; i++)
			;
	}
	if (s2 == NULL)
		j = 0;
	else
	{
		for (j = 0; s2[j]; j++)
			;
	}
	if (j > n)
		j = n;
	newMem = malloc(sizeof(char) * (i + j + 1));
	if (newMem == NULL)
		return (NULL);
	for (k = 0; k < i; k++)
		newMem[k] = s1[k];
	for (k = 0; k < j; k++)
		newMem[k + i] = s2[k];
	newMem[i + j] = '\0';
	return (newMem);
}
