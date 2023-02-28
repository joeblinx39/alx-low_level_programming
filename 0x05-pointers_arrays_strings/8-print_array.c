#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array of integers,
 *               followed by a new line.
 * @a: Pointer to the first element of the array.
 * @n: Number of elements of the array to be printed.
 *
 * Return: void.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar("%d", a[index]);

		if (index != n - 1)
			_putchar(", ");
	}

	_putchar("\n");
}
