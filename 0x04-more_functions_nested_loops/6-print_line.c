#include "main.h"

/**
 * print_line - Print lines if value is above zero
 *
 * @n: number of times the _ character is to be printed
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (int i = 0; i < n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
		_putchar('\n');
}
