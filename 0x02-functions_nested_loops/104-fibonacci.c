#include "holberton.h"

/**
 * fibonacci - calculates the fibonacci sequence
 * @n1: first number to start sequence
 * @n2: second number to start sequence
 * @i: current index
 * @max: maximum index to calculate
 *
 * Return: void
 */
void fibonacci(unsigned long int n1, unsigned long int n2, int i, int max)
{
	unsigned long int sum;

	if (i <= max)
	{
		sum = n1 + n2;
		printf("%lu", sum);
		if (i != max)
			printf(", ");
		fibonacci(n2, sum, i + 1, max);
	}
	else
		printf("\n");
}

/**
 * main - Entry point, prints first 98 fibonacci numbers
 *
 * Return: 0
 */
int main(void)
{
	fibonacci(1, 2, 2, 98);
	return (0);
}

