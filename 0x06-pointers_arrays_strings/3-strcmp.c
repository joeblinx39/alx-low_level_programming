#include "main.h"
#include <string.h>

/**
 * _strcmp - Compares two strings.
 *
 * @s1: Pointer to the first character of the first string.
 * @s2: Pointer to the first character of the second string.
 *
 * Return: An integer less than, equal to,
 * or greater than zero if s1 is found,
 * respectively, to be less than, to match,
 * or be greater than s2.
 */
int _strcmp(char *s1, char *s2)
{
	int index = 0;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			return (s1[index] - s2[index]);
		}
		index++;
	}

	return (0);
}
