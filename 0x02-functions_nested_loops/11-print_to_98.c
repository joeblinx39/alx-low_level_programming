#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The first number to be printed
 *
 */
void print_to_98(int n)
{
	int items;

	if (n <= 98)
	{
		for (items = n; items <= 98; items++)
		{
			printf("%d", items);
			if (items != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (items = n; items >= 98; items--)
		{
			printf("%d", items);
			if (items != 98)
			{
				printf(", ");
			}
		}
	}
	printf("\n");
}
