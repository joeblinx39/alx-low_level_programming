#include <stdio.h>

/**
 * main - Prints the sum of the even-valued terms in the Fibonacci sequence
 *        whose values do not exceed 4,000,000.
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long int sum = 0, num1 = 1, num2 = 2, temp;

	while (num2 <= 4000000)
	{
		if (num2 % 2 == 0)
			sum += num2;

		temp = num2;
		num2 += num1;
		num1 = temp;
	}

	printf("%lu\n", sum);

	return (0);
}

