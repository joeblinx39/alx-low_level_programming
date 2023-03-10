#include "main.h"
#include <stdio.h>

int check_palindrome(char *s, int i, int j);

/**
 * is_palindrome - checks if a string is a palindrome
 *
 * @s: the string to check
 *
 * Return: 1 if s is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	int len = 0;

	while (s[len])
		len++;

	return (check_palindrome(s, 0, len - 1));
}

/**
 * check_palindrome - helper function to recursively check if a string
 * is a palindrome
 *
 * @s: the string to check
 * @i: the starting index
 * @j: the ending index
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
