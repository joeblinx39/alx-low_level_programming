#include "main.h"

/**
 * print_square - Print lines if value is above zero
 *
 * @size: number of times the _ character is to be printed
 */
void print_square(int size)
{
	int width, height;

	if (size > 0)
	{
		for (width = 0; width < size; width++)
		{
			for (height = 0; height < size; height++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
