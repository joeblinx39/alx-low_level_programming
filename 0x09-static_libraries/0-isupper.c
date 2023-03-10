#include "main.h"
#include <ctype.h>

/**
 * _isupper - Entry point
 *
 * @c: recieve input from stdin
 *
 * Return: (1) (success), (0) (failure)
 */
int _isupper(int c)
{
	if (isupper(c))
		return (1);
	else
		return (0);
}
