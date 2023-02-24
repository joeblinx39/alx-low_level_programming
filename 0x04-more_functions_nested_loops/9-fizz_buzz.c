#include <stdio.h>

/**
 * main - Entry point
 *
 * This program uses a for loop to iterate over the numbers from 1 to 100,
 * and for each number, it checks if it's a multiple of 3, 5, or both.
 * Depending on the result, it prints either "Fizz", "Buzz", "FizzBuzz",
 * or the number itself.
 * The program uses printf to print the output, which is separated by spaces.
 * Finally, it prints a newline character at the end.
 *
 * Return: 0 (success)
 */
int main(void)
{
	int counter, num_3, num_5;

	for (counter = 1; counter <= 100; counter++)
	{
		num_3 = counter % 3;
		num_5 = counter % 5;

		if (num_3 == 0 && num_5 == 0)
		{
			printf("FizzBuzz ");
			continue;
		}

		if (num_3 == 0)
		{
			printf("Fizz ");
			continue;
		}

		if (num_5 == 0)
		{
			if (counter == 100)
			{
				printf("Buzz");
				continue;
			}

			printf("Buzz ");
			continue;
		}

		printf("%d ", counter);
	}

	printf("\n");

	return (0);
}
