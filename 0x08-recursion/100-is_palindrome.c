#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - Returns the length of a string recursively
 * @s: Pointer to the string to be measured
 * Return: The length of the string
 */
int _strlen_recursion(char *s)
{
	if (s[0] != '\0')
		return (1 + _strlen_recursion(s + 1));
	return (0);
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
	if (s[i] == s[j])
	{
		if (i > j / 2)
		return (1);
	}
	else
		return (check_palindrome(s, i + 1, j - 1));
	else
		return (0);
}

/**
 * is_palindrome - Check if a string is a palindrome
 * @s: Pointer to the base address of the string
 * Return: 1 if the string is a palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
	return (check_palindrome(s, 0, _strlen_recursion(s) - 1));
}
