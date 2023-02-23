#include <stdio.h>

/**
 * print_fibonacci - prints the first 98 Fibonacci numbers
 *
 * Return: void
 */
void print_fibonacci(void)
{
	unsigned long fib1 = 1, fib2 = 2, fib_sum;
	int i;

	printf("%lu, %lu", fib1, fib2);
	for (i = 3; i <= 98; i++)
	{
		fib_sum = fib1 + fib2;
		printf(", %lu", fib_sum);
		fib1 = fib2;
		fib2 = fib_sum;
	}
	printf("\n");
}

