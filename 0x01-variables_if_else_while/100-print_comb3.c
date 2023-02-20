#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of two digits
 * separated by ',' and '' using putchar function
 *
 *
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_1, num_2;

	for (num_1 = 0; num_1 <= 8; num_1++)
	{
		for (num_2 = num_1; num_2 <= 9; num_2++)
		{
			putchar(num_1 % 10 + '0');
			putchar(num_2 % 10 + '0');

			if (num_1 < 8 || num_2 < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
