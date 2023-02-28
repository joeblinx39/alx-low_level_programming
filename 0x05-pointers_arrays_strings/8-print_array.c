#include "main.h"
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers
 * @a: array of integers
 * @n: number of elements to print
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar(a[index] + '0');

		if (index != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
