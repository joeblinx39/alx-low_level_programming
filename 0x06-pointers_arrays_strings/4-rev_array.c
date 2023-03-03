#include "main.h"

/**
 * reverse_array - reverse array of integers
 * @a: array of type int
 * @n: number of elements in the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int index, temp;

	for (index = 0; index < n--; index++)
	{
		temp = a[index];
		a[index] = a[n];
		a[n] = temp;
	}
}
