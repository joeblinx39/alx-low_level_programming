#include "main.h"

/**
 * helper - A recursive helper function for _sqrt_recursion
 * @n: number to find square root of
 * @i: iterator to check each integer
 *
 * Return: the square root of n, or -1 if n does not have one
 */
int helper(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);
	else
		return (helper(n, i + 1));
}


/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: number to find square root of
 *
 * Return: the natural square root, or -1 if n does not have one
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (helper(n, 1));
}
