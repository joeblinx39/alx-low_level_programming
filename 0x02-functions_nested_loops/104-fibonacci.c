#include <stdio.h>

/**
 * main - prints the first 98 Fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{

	unsigned long fib1 = 1, fib2 = 2, sum;
	int i;

	printf("%lu, %lu", fib1, fib2);

	for (i = 0; i < 96; i++)
	{
		sum = fib1 + fib2;
		printf(", %lu", sum);

		fib1 = fib2;
		fib2 = sum;
	}
	printf("\n");

	return (0);
}
