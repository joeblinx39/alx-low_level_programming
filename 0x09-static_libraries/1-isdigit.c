#include "main.h"
#include <ctype.h>

/**
 * _isdigit - Entry point
 * @c: receive input from stdin
 *
 * Return: (1) (Success), (0) (Failure)
 */
int _isdigit(int c)
{
	if (isdigit(c))
		return (1);
	else
		return (0);
}
