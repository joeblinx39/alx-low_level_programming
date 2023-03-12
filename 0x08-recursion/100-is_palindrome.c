#include "main.h"
#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to get the length of
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen(s + 1) + 1);
}

/**
 * check_palindrome - checks if a string is a palindrome
 * @s: the string to check
 * @i: the index of the current character to check
 * @j: the index of the opposite character to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int check_palindrome(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (check_palindrome(s, i + 1, j - 1));
}

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len;

	len = _strlen(s);

	if (len == 0 || len == 1)
		return (1);

	return (check_palindrome(s, 0, len - 1));
}
