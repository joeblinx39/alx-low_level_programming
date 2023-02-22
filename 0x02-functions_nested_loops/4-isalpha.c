#include <ctype.h>

/**
 * _isalpha - Entry point
 *
 * @c: recieve input from stdin
 *
 * Return: (1) (success), (0) (failure)
 */
int _isalpha(int c)
{
	if (isalpha(c))
		return (1);
	else
		return (0);
}
