#include "main.h"

/**
 * swap_int - swap the integers
 * @a: first int
 * @b: second int
 * Return: (0)
 */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *b;
	*b = *a;
	*a = temp;
}
