#include <stdio.h>

/**
 * main - Entry point
 *
 * Prints all the numbers of base 16 in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num_alpha;

	for (num_alpha = '0'; num_alpha <= '9'; num_alpha++)
	{
		putchar(num_alpha);
	}
	for (num_alpha = 'a'; num_alpha <= 'f'; num_alpha++)
	{
		putchar(num_alpha);
	}
	putchar('\n');

	return (0);
}
