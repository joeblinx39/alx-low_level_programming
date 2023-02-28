#include "main.h"
#include <stdlib.h>

/**
 * print_array - prints n elements of an array of integers
 * @arr: array of integers
 * @size: number of elements to print
 *
 * Return: void
 */
void print_array(int *arr, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		_putchar(arr[index] + '0');

		if (i != size - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}
