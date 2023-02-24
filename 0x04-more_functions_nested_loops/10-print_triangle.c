#include "main.h"

/**
 * print_triangle - prints a triangle of a given size
 *
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int row, column;

	if (size > 0)
	{
		for (row = 1; row <= size; row++)
		{
			for (column = 1; column <= size - row; column++)
				_putchar(' ');
			for (column = 1; column <= row; column++)
				_putchar('#');
			if (row == size)
				continue;
			_putchar('\n');
		}
	}
	_putchar('\n');
}
