#include "main.h"

/**
 * _strstr - finds the first occurrence of a substring in a string
 * @haystack: the string to search in
 * @needle: the substring to search for
 *
 * Return: a pointer to the beginning of the
 * located substring, or NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack)
	{
		h = haystack;
		n = needle;

		while (*n && *h == *n)
		{
			h++;
			n++;
		}

		if (!*n)
			return (haystack);

		haystack++;
	}

	return (NULL);
}

